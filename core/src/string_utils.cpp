#include <scaffold/string_utils.hpp>

#include <algorithm>
#include <cctype>

namespace scaffold
{

    std::string to_kebab_case(const std::string &value)
    {
        std::string result;

        for (char c : value)
        {
            if (std::isspace(static_cast<unsigned char>(c)))
            {
                result += '-';
            }
            else
            {
                result += static_cast<char>(
                    std::tolower(static_cast<unsigned char>(c)));
            }
        }

        return result;
    }

}