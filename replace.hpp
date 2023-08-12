
// algocpp/string/replace.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_STRING_REPLACE
#define ALGOCPP_STRING_REPLACE

#include <string>
#include <algocpp/exception/blank.hpp>

namespace algocpp
{
	namespace string
	{
		namespace base
		{
			template <typename T>
			inline T base_replace(T s, T from, T to, unsigned long long max = SIZE_MAX)
			{
				if (from == T{})
				{
					throw algocpp::exception::blank_argument("Empty strings cannot be replaced.");
				}

				T ret = T{};
				unsigned long long cnt = 0;
				for (unsigned long long i = 0; i < s.size(); i++)
				{
					if (s.size() - i >= from.size() && s[i] == from[0] && cnt < max)
					{
						bool flag = true;
						for (unsigned long long j = 0; j < (unsigned long long)(from.size()); j++)
						{
							if (s[i + j] != from[j])
							{
								flag = false;
								break;
							}
						}

						if (flag)
						{
							ret += to;
							i += from.size() - 1;
							cnt++;
						}
						else
							ret += s[i];
					}
					else
						ret += s[i];
				}

				return ret;
			}
		}

		inline std::string replace(std::string s, std::string from, std::string to, unsigned long long max = SIZE_MAX)
		{
			return base::base_replace(s, from, to, max);
		}

		inline std::u32string replace(std::u32string s, std::u32string from, std::u32string to, unsigned long long max = SIZE_MAX)
		{
			return base::base_replace(s, from, to, max);
		}

		inline std::u16string replace(std::u16string s, std::u16string from, std::u16string to, unsigned long long max = SIZE_MAX)
		{
			return base::base_replace(s, from, to, max);
		}

#if __cplusplus >= 202002L
		inline std::u8string replace(std::u8string s, std::u8string from, std::u8string to, unsigned long long max = SIZE_MAX)
		{
			return base::base_replace(s, from, to, max);
		}
#endif

		inline std::wstring replace(std::wstring s, std::wstring from, std::wstring to, unsigned long long max = SIZE_MAX)
		{
			return base::base_replace(s, from, to, max);
		}
	}
}

#endif // ALGOCPP_STRING_REPLACE
