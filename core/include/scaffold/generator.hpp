#pragma once

#include <scaffold/generation_request.hpp>
#include <scaffold/generation_result.hpp>

namespace scaffold
{

    class Generator
    {
    public:
        GenerationResult generate(const GenerationRequest &request);

    private:
        bool validate(const GenerationRequest &request);
    };

}