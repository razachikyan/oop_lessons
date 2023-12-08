#pragma once
#include<string>
#include<map>
#include <variant>
#include <iostream>

enum Commands {
    undo,
    redo,
    add,
    del,
    exit,
    non
};
class Command
{
public:
    using Value = std::variant< int, std::string >;
    using Arguments = std::map< std::string, Value >;

public:
    Command( const Arguments& args ) : args(args) {}
    virtual ~Command() {}
    virtual void exec() = 0;
private:
    Arguments args;
};

