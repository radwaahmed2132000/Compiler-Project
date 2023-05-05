#! /usr/bin/env python3

from argparse import ArgumentParser
from typing import List

import subprocess
import os
import re

TEST_TYPE_SEPARATOR = "===\n"

class Testcase:
    def __init__(self, dir: os.PathLike, filename: os.PathLike) -> None:
        with open(os.path.join(dir, filename), "r") as f:

            test_case_file = f.read()
            self.filename = filename
            self.interpreter_ref = self.compiler_ref = None

            type_count = test_case_file.count(TEST_TYPE_SEPARATOR)
            splits = [part.strip() for part in test_case_file.split('===')]

            self.code = splits[0]
            if type_count == 1:
                self.interpreter_ref = splits[1]
            elif type_count == 2:
                self.interpreter_ref, self.compiler_ref = splits[1:]

    def __str__(self) -> str:
        s = f"{self.filename}"

        test_types = []
        if self.interpreter_ref is not None:
            test_types.append("interpreter")
        if self.compiler_ref is not None:
            test_types.append("compiler")

        if len(test_types) > 0:
            s += f" ({','.join(test_types)})"

        return s

    def get_binary_type_output(self, type_name: str) -> str:
        return {
            "interpreter": self.interpreter_ref,
            "compiler": self.compiler_ref
        }.get(type_name)


def indent_list(strings: List[str], indent=1) -> List[str]:
    intdent_str = "\t" * indent
    return '\n'.join([f"{intdent_str}{string}" for string in strings])

def list_test_cases(test_cases: List[Testcase]):
    return [str(test_case) for test_case in test_cases]


arg_parser = ArgumentParser()
arg_parser.add_argument("shbl_binary_type", help="The type of binary to test", choices=["interpreter", "compiler"])
args = arg_parser.parse_args()

binary = f"./shbl_{args.shbl_binary_type}"

if not os.path.exists(binary):
    print(f"Binary {binary} does not exist")
    exit(1)

test_case_dir = "./testcases/"
test_cases = [file for file in os.listdir(test_case_dir) if file.endswith(".shbl")]
test_cases = [Testcase(test_case_dir, test_case) for test_case in test_cases]

print("Testcases found:")
print(indent_list(list_test_cases(test_cases)))


skipped = passed = failed = 0
for test_case in test_cases:
    expected_output = test_case.get_binary_type_output(args.shbl_binary_type)
    if expected_output is None:
        skipped += 1
        print(f"SKIPPED: {test_case.filename}, no test case output.")
        continue

    proc = subprocess.run([binary], input=test_case.code.encode(), stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    actual_output = proc.stdout.decode().strip()

    # Removes all whitespace
    # For example:
    #   push	1
    #   pop	a
    # becomes:
    #   push1popa
    # This is to make the checks not affected by whitespace or indentation
    re_nowhitespace = re.compile(r"\W")
    expected_no_whitespace = re_nowhitespace.sub("", expected_output)
    actual_no_whitespace = re_nowhitespace.sub("", actual_output)

    if expected_no_whitespace == actual_no_whitespace:
        passed += 1
        print(f"PASSED: {test_case.filename}")
    else:
        failed += 1
        print(f"FAILED: {test_case.filename}")
        print(f"Expected output:\n{expected_output}")
        print(f"Actual output:\n{actual_output}")

print(f"\n PASSED: {passed}, FAILED: {failed}, SKIPPED: {skipped}")
