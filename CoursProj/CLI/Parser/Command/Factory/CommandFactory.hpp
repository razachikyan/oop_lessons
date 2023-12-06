#pragma once
#include "../../Parser/Parser.hpp"
#include <string>
#include <map>

class CommandFactory
{
public:
    CommandFactory() {};

public:
    static Command create(std::string Name, std::map<std::string, std::string>);
};
