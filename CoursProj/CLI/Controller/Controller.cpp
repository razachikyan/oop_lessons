#include "./Controller.hpp"

Controller& Controller::getInstance() {
    static Controller instance;
    return instance;
}

void Controller::run() {
    Parser parser;
    while (!getExitStatus()) {
        Command *cmd = parser.parse(getInput());
        cmd->exec();
    }
}

std::string Controller::getInput() {
    std::string line;
    std::getline(std::cin, line);
    return line;
}
