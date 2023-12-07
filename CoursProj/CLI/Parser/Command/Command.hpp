#pragma once
#include<string>
#include<map>

class Command
{
public:
    Command(std::map<std::string,std::string> args) {};
    virtual void exec() {};
};

