#include "./Controller.hpp"
#include "./Parser/Parser.hpp"

void Controller::run() {
    Parser parser;
    while (!isExit) {
        Command cmd = parser.parse(getInput());
        cmd->exec();
    }
}

std::string Controller::getInput() {
    return "asd";
}