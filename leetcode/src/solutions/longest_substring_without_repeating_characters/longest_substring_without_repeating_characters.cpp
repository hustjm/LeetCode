
#include "longest_substring_without_repeating_characters.h"
#include <unordered_map>
int SLT_LengthOfLongestSubstring::lengthOfLongestSubstring(string s)
{
    int ret = 0;
    unordered_map<char, int> char_map;
    for (auto iter = s.begin(); iter != s.end(); ++iter)
    {
        string tmp ="";
        tmp.append(iter, s.end());
        int tmp_ret = GetMaxOfOneString(tmp);
        if (tmp_ret > ret)
        {
            ret = tmp_ret;
        }
    }

    return ret;
}

int SLT_LengthOfLongestSubstring::GetMaxOfOneString(string s)
{
    unordered_map<char, int> hash_cache;
    int idx = 0;
    for (auto iter = s.begin(); iter != s.end(); ++iter,++idx)
    {
        auto char_iter = hash_cache.find(*iter);
        if (char_iter == hash_cache.end())
        {
            hash_cache[*iter] = idx;
            continue;
        }
        else
        {
            break;
        }
    }

    return idx;
}

void TestCase_LengthOfLongestSubstring::run()
{
    string test_string = "sdffa";
    SLT_LengthOfLongestSubstring solution;
    int ret = solution.lengthOfLongestSubstring(test_string);
    printf("test_string:%s\n", test_string.c_str());
    printf("test_result:%d\n", ret);
    getchar();
}
