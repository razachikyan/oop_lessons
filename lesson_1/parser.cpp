#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class CommandParser {
public:
    CommandParser(const std::string& input) : input(input) {}

    struct Command {
        std::string name;
        std::vector<std::string> arguments;
    };

    Command parseInput() {
        Command cmd;

        std::istringstream iss(input);
        iss >> cmd.name; // Extract the first word as the command

        std::string arg;
        while (iss >> arg) {
            cmd.arguments.push_back(arg);
        }

        return cmd;
    }

private:
    std::string input;
};

int main() {
    std::string input;
    std::cout << "Enter a command: ";
    std::getline(std::cin, input);

    CommandParser parser(input);
    CommandParser::Command cmd = parser.parseInput();

    if (cmd.name == "echo") {
        for (const std::string& arg : cmd.arguments) {
            std::cout << arg << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Unknown command." << std::endl;
    }

    return 0;
}
