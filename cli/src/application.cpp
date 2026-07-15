#include "application.hpp"
#include "command.hpp"

#include <iostream>

int Application::run(int argc, char *argv[])
{
    std::cout << "Project Scaffolder\n";

    if (argc <= 1)
    {
        // print usage
    }
    else
    {
        auto command = parse_command(argv[1]);

        switch (command)
        {
        case Command::Help:
            std::cout << "Not implemented.\n";
            break;

        case Command::Version:
            std::cout << "Not implemented.\n";
            break;

        case Command::List:
            std::cout << "Not implemented.\n";
            break;

        case Command::New:
            std::cout << "Not implemented.\n";
            break;

        default:
            break;
        }
    }

    return 0;
}