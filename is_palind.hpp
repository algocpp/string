
// algocpp/string/is_palind.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_STRING_ISPALIND
#define ALGOCPP_STRING_ISPALIND

#include <string>
#include <locale>
#include <algocpp/string/wconvert.hpp>

namespace algocpp
{
	namespace string
	{
		inline bool is_palind(std::u32string s) noexcept
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

		inline bool is_palind(std::string s) noexcept
		{
			return is_palind(algocpp::string::utf32conv.from_bytes(s));
		}

		inline bool is_palind(std::u16string s) noexcept
		{
			return is_palind(algocpp::string::utf16conv.to_bytes(s));
		}

		inline bool is_palind(std::wstring s) noexcept
		{
			return is_palind(algocpp::string::wstrconv.to_bytes(s));
		}

// C++20
#if __cplusplus >= 202002LL
		inline bool is_palind(std::u8string s) noexcept
		{
			return is_palind(std::string(s.begin(), s.end()));
		}
#endif
	}
}

#endif // ALGOCPP_STRING_ISPALIND