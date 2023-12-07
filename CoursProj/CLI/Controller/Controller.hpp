#pragma once
#include <string>

class Controller {
public:
    Controller() : isExit( false ) {};

public:
    void run();
    std::string getInput();

private:
    bool isExit;
};