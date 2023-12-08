#pragma once
#include "./Command.hpp"

class DelCommand: public Command {
public:
    DelCommand(const Arguments& args):Command(args) {};

public:
    void exec() override;
};