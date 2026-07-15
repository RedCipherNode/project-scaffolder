#include "command.hpp"

Command parse_command(std::string_view command)
{
    if (command == "help")
        return Command::Help;

    if (command == "version")
        return Command::Version;

    if (command == "list")
        return Command::List;

    if (command == "new")
        return Command::New;

    return Command::None;
}