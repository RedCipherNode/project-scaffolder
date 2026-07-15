#pragma once

#include <scaffold/generation_context.hpp>
#include <scaffold/generation_request.hpp>

namespace scaffold
{

    class ConventionEngine
    {
    public:
        GenerationContext resolve(const GenerationRequest &request);
    };

}