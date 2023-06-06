
// algocpp/string/replace.cpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#include <string>
#include <assert.h>

#ifndef ALGOCPP_STRING_REPLACE
#define ALGOCPP_STRING_REPLACE

namespace algocpp
{
	namespace string
	{
		inline std::string replace(std::string s, std::string from, std::string to, unsigned long long max = 4611686018427387897ULL)
		{
			assert(from != "");
			std::string ret = "";
			unsigned long long cnt = 0;
			for (unsigned long long i = 0; i < s.size(); i++)
			{
				if (s.size() - i >= from.size() && s[i] == from[0] && cnt < max)
				{
					bool flag = true;
					for (unsigned long long j = 0; j < from.size(); j++)
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
}

#endif // ALGOCPP_STRING_REPLACE
