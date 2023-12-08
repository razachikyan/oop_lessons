#pragma once
#include "../Command.hpp"

class ExitCommand: Command{
public:
    ExitCommand(const Arguments& args):Command(args) {};

public:
    void exec() override;;
};
