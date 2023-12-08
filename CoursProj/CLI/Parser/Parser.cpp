#include "./Parser.hpp"

Command* Parser::parse(std::string input) {
        std::map<std::string, std::string> args;

        std::istringstream iss(input);
        std::string cmdName;
        iss >> cmdName;

        std::string name, value;
        while (iss >> name >> value) {
            args[name]=value;
        }
        return CommandFactory::create(cmdName, args);
}