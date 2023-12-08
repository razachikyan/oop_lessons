#pragma once
#include "../Command.hpp"

class NonCommand: Command {
public:
    NonCommand(const Arguments& args):Command(args) {};

public:
    void exec() override;
};
