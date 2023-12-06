#pragma once
#include <string>

class Controller {
public:
    Controller() : isExit( false ) {};

private:
    std::string getInput();

private:
    bool isExit;
public:
    void run();
};