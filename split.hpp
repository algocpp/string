
// algocpp/string/split.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_STRING_SPLIT
#define ALGOCPP_STRING_SPLIT

#include <vector>
#include <string>
#include <locale>
#include <algocpp/exception/blank.hpp>
#include <algocpp/string/wconvert.hpp>

namespace algocpp
{
	namespace string
	{
		namespace base
		{
			template <typename Tp1>
			inline std::vector<Tp1> base_split(Tp1 s, Tp1 div)
			{
				Tp1 blank = Tp1{};

				if (div == blank)
				{
					std::vector<Tp1> result(s.size());

					for (unsigned long long i = 0; i < s.size(); i++)
					{
						result[i] = Tp1{s[i]};
					}

					return result;
				}

				std::vector<Tp1> result;
				Tp1 tmp = blank;
				for (unsigned long long i = 0; i < s.size(); i++)
				{
					if (s.size() - i >= div.size() && s[i] == div[0])
					{
						bool flag = true;
						for (unsigned long long j = 0; j < div.size(); j++)
						{
							if (s[i + j] != div[j])
							{
								flag = false;
								break;
							}
						}

						if (flag)
						{
							result.push_back(tmp);
							tmp = blank;
							i += div.size() - 1;
						}
					}
					else
					{
						tmp += s[i];
					}
				}

				// if (tmp != blank)
				result.push_back(tmp);

				return result;
			}
		}

		inline std::vector<std::string> split(std::string s, std::string div)
		{
			return base::base_split<std::string>(s, div);
		}

		inline std::vector<std::u32string> split(std::u32string s, std::u32string div)
		{
			return base::base_split<std::u32string>(s, div);
		}

		inline std::vector<std::u16string> split(std::u16string s, std::u16string div)
		{
			return base::base_split<std::u16string>(s, div);
		}

		inline std::vector<std::wstring> split(std::wstring s, std::wstring div)
		{
			return base::base_split<std::wstring>(s, div);
		}

#if __cplusplus >= 202002LL
		inline std::vector<std::u8string> split(std::u8string s, std::u8string div)
		{
			return base::base_split<std::u8string>(s, div);
		}
#endif
	}
}

#endif // ALGOCPP_STRING_SPLIT
