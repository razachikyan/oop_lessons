#pragma once
#include "../Command.hpp"
#include <map>

class AddCommmand: public Command
{
public:
    AddCommmand(std::map<std::string,std::string>) {};

public:
    void exec();
};
