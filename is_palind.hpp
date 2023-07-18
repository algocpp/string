
// algocpp/string/is_palind.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_STRING_ISPALIND
#define ALGOCPP_STRING_ISPALIND

#include <string>
#include <locale>

namespace algocpp
{
	namespace string
	{
		inline bool is_palind(std::string s) noexcept
		{
			for (unsigned long long i = 0; i < (unsigned long long)(s.size() / 2); i++)
			{
				if (s[i] != s[s.size() - i - 1])
				{
					return false;
				}
			}
			return true;
		}

	}
}

#endif // ALGOCPP_STRING_ISPALIND