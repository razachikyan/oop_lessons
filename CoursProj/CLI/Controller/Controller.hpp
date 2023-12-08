#pragma once
#include <iostream>
#include <string>
#include "./Parser/Command/Command.hpp"
#include "./Parser/Parser.hpp"

class Controller {
public:
    static Controller& getInstance() {
        static Controller instance;
        return instance;
    }

    void run();
    std::string getInput();

    bool getExitStatus() const {
        return isExit;
    }

    void setExitStatus(bool value) {
        isExit = value;
    }

private:
    Controller() : isExit(false) {}

    Controller(const Controller&) = delete;
    Controller& operator=(const Controller&) = delete;

    bool isExit;
};