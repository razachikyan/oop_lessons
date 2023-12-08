#pragma once
#include "../Command.hpp"
#include <map>

class AddCommmand: public Command
{
public:
    AddCommmand(const Arguments& args): Command(args) {}

public:
    void exec() override;
};
