#include "longest_palindromic_substring.h"

std::string SLT_LongestPalindromicSubstring::longestPalindrome(string s)
{
    string ret = "";
    size_t length = s.size();
    size_t idx = 0;
    for (auto iter = s.begin(); iter != s.end(); ++iter, ++idx)
    {
        int sub_begin_idx = idx;
        int sub_end_idx = idx;

        string tmp = JudgeSubstring(s, sub_begin_idx, sub_end_idx);
        ret = (ret.length() > tmp.length()) ? ret : tmp;
        if (idx + 1 < s.length())
        {
            string sub = s.substr(idx, 2);
            if (IsPalindrome(sub))
            {
                sub_begin_idx = idx;
                sub_end_idx = idx + 1;
                string tmp = JudgeSubstring(s, sub_begin_idx, sub_end_idx);
                ret = (ret.length() > tmp.length()) ? ret : tmp;
            }
        }
    }

    return ret;
}



std::string SLT_LongestPalindromicSubstring::JudgeSubstring(string& s, int sub_begin, int sub_end)
{
    string ret = "";
    int length = s.length();
    while (sub_begin >= 0 && sub_end < (int)length)
    {
        string sub_string = s.substr(sub_begin, sub_end - sub_begin + 1);
        if (IsPalindrome(sub_string))
        {
            if (ret.size() < sub_string.size())
            {
                ret = sub_string;
            }
        }
        else
        {
            break;
        }

        sub_begin -= 1;
        sub_end += 1;
    }

    return ret;
}

bool SLT_LongestPalindromicSubstring::IsPalindrome(string s)
{
    if (s.empty())
    {
        return true;
    }
    bool ret = true;
    for (int head = 0, tail = s.length() - 1; head != tail && head<=tail; ++head, --tail)
    {
        if (s[head] != s[tail])
        {
            ret = false;
            break;
        }
    }
    return ret;
}

void Testcase_LongestPalindromicSubstring::run()
{
    string test_string = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";

    SLT_LongestPalindromicSubstring solution;

    string result = solution.longestPalindrome(test_string);

    printf("Input  string:%s\n", test_string.c_str());
    printf("Output string:%s\n", result.c_str());

    getchar();
}
