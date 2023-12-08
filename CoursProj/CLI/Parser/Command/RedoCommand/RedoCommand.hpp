#pragma once
#include "../Command.hpp"

class RedoCommand: Command {
public:
    RedoCommand(const Arguments& args):Command(args) {};

public:
    void exec() override;
};
