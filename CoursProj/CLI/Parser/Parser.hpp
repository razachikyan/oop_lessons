#pragma once
#include <any>
#include <string>
#include <vector>
#include <sstream>
#include "./Command/Command.hpp"
#include "./Factory/CommandFactory.hpp"

class Parser {
public:
    Parser() = default;

public:
    Command* parse(std::string input);
};