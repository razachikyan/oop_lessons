#pragma once
#include "./Command.hpp"

class DelCommand: public Command {
public:
    DelCommand(std::map<std::string, std::string>) {};

public:
    void exec();
};