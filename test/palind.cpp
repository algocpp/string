
#include "../is_palind.hpp"
#include <gtest/gtest.h>
#include <string>
using namespace algocpp::string;

// std::string

TEST(palind, string_yes)
{
	std::string tmp = "abcdcba";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind, string_no)
{
	std::string tmp = "this is not a palindrome";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind, char_yes)
{
	EXPECT_TRUE(is_palind("abcdcba"));
}

TEST(palind, char_no)
{
	EXPECT_FALSE(is_palind("this is not a palindrome"));
}

TEST(palind, null)
{
	EXPECT_TRUE(is_palind(""));
}

// std::u32string

TEST(palind_u32, string_yes)
{
	std::u32string tmp = U"abcdcba";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_u32, string_no)
{
	std::u32string tmp = U"this is not a palindrome";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_u32, char_yes)
{
	EXPECT_TRUE(is_palind(U"abcdcba"));
}

TEST(palind_u32, char_no)
{
	EXPECT_FALSE(is_palind(U"this is not a palindrome"));
}

TEST(palind_u32, null)
{
	EXPECT_TRUE(is_palind(U""));
}

TEST(palind_u32, multistr_yes)
{
	std::u32string tmp = U"たけやぶやけた";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_u32, multistr_no)
{
	std::u32string tmp = U"たけやぶやけなかった";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_u32, multichar_yes)
{
	EXPECT_TRUE(is_palind(U"たけやぶやけた"));
}

TEST(palind_u32, multichar_no)
{
	EXPECT_FALSE(is_palind(U"たけやぶやけなかった"));
}

TEST(palind_u32, emoji_yes)
{
	EXPECT_TRUE(is_palind(U"💪🌞💪"));
}

TEST(palind_u32, emoji_no)
{
	EXPECT_FALSE(is_palind(U"🤔😡😡"));
}

// std::u16string

TEST(palind_u16, string_yes)
{
	std::u16string tmp = u"abcdcba";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_u16, string_no)
{
	std::u16string tmp = u"this is not a palindrome";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_u16, char_yes)
{
	EXPECT_TRUE(is_palind(u"abcdcba"));
}

TEST(palind_u16, char_no)
{
	EXPECT_FALSE(is_palind(u"this is not a palindrome"));
}

TEST(palind_u16, null)
{
	EXPECT_TRUE(is_palind(u""));
}

TEST(palind_u16, multistr_yes)
{
	std::u16string tmp = u"たけやぶやけた";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_u16, multistr_no)
{
	std::u16string tmp = u"たけやぶやけなかった";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_u16, multichar_yes)
{
	EXPECT_TRUE(is_palind(u"たけやぶやけた"));
}

TEST(palind_u16, multichar_no)
{
	EXPECT_FALSE(is_palind(u"たけやぶやけなかった"));
}

// std::u8string

TEST(palind_u8, string_yes)
{
	std::u8string tmp = u8"abcdcba";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_u8, string_no)
{
	std::u8string tmp = u8"this is not a palindrome";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_u8, char_yes)
{
	EXPECT_TRUE(is_palind(u8"abcdcba"));
}

TEST(palind_u8, char_no)
{
	EXPECT_FALSE(is_palind(u8"this is not a palindrome"));
}

TEST(palind_u8, null)
{
	EXPECT_TRUE(is_palind(u8""));
}

// std::wstring

TEST(palind_w, string_yes)
{
	std::wstring tmp = L"abcdcba";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_w, string_no)
{
	std::wstring tmp = L"this is not a palindrome";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_w, char_yes)
{
	EXPECT_TRUE(is_palind(L"abcdcba"));
}

TEST(palind_w, char_no)
{
	EXPECT_FALSE(is_palind(L"this is not a palindrome"));
}

TEST(palind_w, null)
{
	EXPECT_TRUE(is_palind(L""));
}

TEST(palind_w, multistr_yes)
{
	std::wstring tmp = L"たけやぶやけた";
	EXPECT_TRUE(is_palind(tmp));
}

TEST(palind_w, multistr_no)
{
	std::wstring tmp = L"たけやぶやけなかった";
	EXPECT_FALSE(is_palind(tmp));
}

TEST(palind_w, multichar_yes)
{
	EXPECT_TRUE(is_palind(L"たけやぶやけた"));
}

TEST(palind_w, multichar_no)
{
	EXPECT_FALSE(is_palind(L"たけやぶやけなかった"));
}