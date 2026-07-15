#pragma once

#include <string>

namespace scaffold
{

    struct GenerationRequest
    {
        std::string project_name;
        std::string language;
        std::string workflow;
    };

}