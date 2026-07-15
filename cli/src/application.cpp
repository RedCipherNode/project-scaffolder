#include "application.hpp"
#include "command.hpp"
#include <scaffold/generator.hpp>
#include <scaffold/generation_request.hpp>

#include <iostream>

int Application::run(int argc, char *argv[])
{
    if (argc <= 1)
    {
        show_usage();
        return 0;
    }

    auto command = parse_command(argv[1]);

    switch (command)
    {
    case Command::Help:
        show_help();
        break;

    case Command::Version:
        show_version();
        break;

    case Command::New:
        return command_new();

    case Command::List:
        return command_list();

    default:
        std::cout << "Unknown command.\n";
        show_usage();
        break;
    }

    return 0;
}

void Application::show_usage() const
{
    std::cout << "Project Scaffolder\n\n";

    std::cout << "Usage:\n";
    std::cout << "    scaffold <command>\n";
}

void Application::show_help() const
{
    show_usage();

    std::cout << "\nCommands:\n";
    std::cout << "    new\n";
    std::cout << "    list\n";
    std::cout << "    version\n";
    std::cout << "    help\n";
}

void Application::show_version() const
{
    std::cout << "Project Scaffolder v0.1.0\n";
}

int Application::command_new()
{
    std::cout << "Not implemented.\n";
    return 0;
}

int Application::command_list()
{
    std::cout << "Not implemented.\n";
    return 0;
}

int Application::command_new()
{
    scaffold::Generator generator;

    scaffold::GenerationRequest request;
    request.project_name = "example";

    auto result = generator.generate(request);

    if (result.success)
    {
        std::cout << "Success\n";
    }

    return 0;
}