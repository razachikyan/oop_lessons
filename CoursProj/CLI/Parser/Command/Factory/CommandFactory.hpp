#pragma once
#include <string>
#include <map>
#include <memory>

#include "../AddCommand/AddCommand.hpp"
#include "../DelCommand/DelCommand.hpp"
#include "../UndoCommand/UndoCommand.hpp"
#include "../RedoCommand/RedoCommand.hpp"
#include "../ExitCommand/ExitCommand.hpp"
#include "../NonCommand/NonCommand.hpp"
#include "../../Parser/Parser.hpp"
#include "../Command.hpp"

class CommandFactory {
public:
    CommandFactory() {};

public:
    static std::unique_ptr< Command > create( const std::string& name, const Command::Arguments& args );
};
