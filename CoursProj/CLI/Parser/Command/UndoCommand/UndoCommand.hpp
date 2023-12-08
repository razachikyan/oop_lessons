#pragma once
#include "../Command.hpp"

class UndoCommand: Command {
public:
    UndoCommand(const Arguments& args):Command(args) {};

public:
    void exec() override;
};
