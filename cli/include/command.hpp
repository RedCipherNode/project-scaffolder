#pragma once

#include <string_view>

enum class Command
{
    None,
    Help,
    Version,
    List,
    New
};

Command parse_command(std::string_view command);