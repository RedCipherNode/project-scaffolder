#pragma once

#include <string>

namespace scaffold
{

    struct GenerationContext
    {
        std::string project_name;

        std::string repository_name;

        std::string language;

        std::string workflow;
    };

}