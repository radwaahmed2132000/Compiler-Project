#pragma once
#include <variant>
#include <iostream>
#include <vector>

struct ErrorType: std::vector<std::string> {};
struct SuccessType: std::string {};

// auto success = Result::Success("int");
// auto error  = Result::Error("LHS = int, RHS = string");
// error.push_back("another error!");
struct Result: std::variant<ErrorType, SuccessType> {
    bool isSuccess() const {
        return std::holds_alternative<SuccessType>(*this);
    }

    static Result Success(std::string type) {
        return Result{std::variant<ErrorType, SuccessType>(SuccessType{type})};
    }

    static Result Error(std::string error) {
        return Result{std::variant<ErrorType, SuccessType>(ErrorType{{error}})};
    }

    Result& addError(std::string newError) {
        if(auto *s = std::get_if<SuccessType>(this); s != nullptr) {
            std::cerr << "Cannot add an error to a success variant\n";
        } else if (auto *e = std::get_if<ErrorType>(this); e != nullptr) {
            e->push_back(newError);
        }

        return *this;
    }

    Result& mergeErrors(ErrorType& errors) {
        for(const auto& err: errors) {
            this->addError(err);
        }

        return *this;
    }
};
