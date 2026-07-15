#include <scaffold/convention_engine.hpp>

namespace scaffold
{

    GenerationContext ConventionEngine::resolve(const GenerationRequest &request)
    {
        GenerationContext context;

        context.project_name = request.project_name;
        context.language = request.language;
        context.workflow = request.workflow;

        context.repository_name = request.project_name;

        return context;
    }

}