#include <scaffold/generator.hpp>

namespace scaffold
{

    GenerationResult Generator::generate(const GenerationRequest &request)
    {
        (void)request;

        GenerationResult result;
        result.success = true;

        return result;
    }

}