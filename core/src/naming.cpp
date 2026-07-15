#include <scaffold/naming.hpp>

#include <algorithm>
#include <cctype>

namespace scaffold::naming
{

    std::string repository(const std::string &name)
    {
        std::string result;

        for (char c : name)
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