#include <scaffold/convention_engine.hpp>

GenerationResult Generator::generate(const GenerationRequest &request)
{
    GenerationResult result;

    if (!validate(request))
        return result;

    ConventionEngine convention;

    auto context = convention.resolve(request);

    (void)context;

    result.success = true;

    return result;
}