#include "./CommandFactory.hpp"

static std::unique_ptr< Command > create( Commands name, const Command::Arguments& args ) {
    switch (name)
    {
    case Commands::add:
        return std::make_unique< AddCommmand >( args );
    case Commands::undo:
        return std::make_unique< UndoCommand >( args );
    case Commands::redo:
        return std::make_unique< RedoCommand >( args );
    case Commands::del:
        return std::make_unique< DelCommand >( args );
    case Commands::exit:
        return std::make_unique< ExitCommand >( args );
    case Commands::non:
        return std::make_unique< NonCommand >( args );
    default:
        break;
    }
};