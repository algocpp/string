
// algocpp/string/split.cpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#include <vector>
#include <string>
#include <assert.h>

#ifndef ALGOCPP_STRING_SPLIT
#define ALGOCPP_STRING_SPLIT

namespace algocpp
{
	namespace string
	{
		/// @brief Split a string into specific strings
		/// @param s String to be split
		/// @param div String to be split
		/// @return Sequence after splitting
		inline std::vector<std::string> split(std::string s, std::string div)
		{
			assert(div != "");
			std::vector<std::string> result;
			std::string tmp = "";
			for (int i = 0; i < s.size(); i++)
			{
				if (s.size() - i >= div.size() && s[i] == div[0])
				{
					bool flag = true;
					for (int j = 0; j < div.size(); j++)
					{
						if (s[i + j] != div[j])
						{
							flag = false;
							break;
						}
					}

					if (flag && tmp != "")
					{
						result.push_back(tmp);
						tmp = "";
						i += div.size() - 1;
					}
				}
				else
				{
					tmp += s[i];
				}
			}

			if (tmp != "")
				result.push_back(tmp);

			return result;
		}
	}
}

#endif // ALGOCPP_STRING_SPLIT
