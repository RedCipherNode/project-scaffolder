#include <scaffold/convention_engine.hpp>

GenerationResult Generator::generate(const GenerationRequest &request)
{
    GenerationResult result;

    if (!validate(request))
        return result;

    ConventionEngine convention;

    auto context = convention.resolve(request);

    std::cout << context.repository_name << '\n';

    return result;
}