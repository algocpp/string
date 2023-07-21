
// algocpp/string/wconvert.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_STRING_WCONVERT
#define ALGOCPP_STRING_WCONVERT

#include <string>
#include <locale>
#include <codecvt>

namespace algocpp
{
	namespace string
	{
		std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> utf32conv;
		std::wstring_convert<std::codecvt_utf8<char16_t>, char16_t> utf16conv;
		std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> wstrconv;

		// C++20
		// WARNING: 謎のエラーを吐く
		// #if __cplusplus >= 202002L
		// 		std::wstring_convert<std::codecvt_utf8<char8_t>, char8_t> utf8conv;
		// #endif
	}
}

#endif // ALGOCPP_STRING_WCONVERT
