#pragma once
#include <any>
#include <string>
#include <vector>

using Command = std::any;

class Parser {
public:
    Parser() {};

public:
    Command* parse(std::string input);

private:
    std::vector<std::string> tokenize(std::string input);
};