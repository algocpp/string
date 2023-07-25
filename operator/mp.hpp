
// algocpp/string/operator/mp.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_STRING_OPERATOR_MP
#define ALGOCPP_STRING_OPERATOR_MP

#include <string>

inline std::string operator*(std::string const &s, unsigned long long x) noexcept
{
	std::string ans = "";
	while (x--)
	{
		ans += s;
	}

	return ans;
}

inline std::string operator*=(std::string &s, unsigned long long x) noexcept
{
	s = s * x;
	return s;
}

#endif // ALGOCPP_STRING_MULTIPLIATION
