
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
    runQuickSolution();
}

void TestCase_LengthOfLongestSubstring::runOrgSolution()
{
    string test_string = "sdffa";
    SLT_LengthOfLongestSubstring solution;
    int ret = solution.lengthOfLongestSubstring(test_string);
    printf("test_string:%s\n", test_string.c_str());
    printf("test_result:%d\n", ret);
    getchar();
}

void TestCase_LengthOfLongestSubstring::runQuickSolution()
{
    string test_string = "sdffaafdfa";
    SLT_LengthOfLongestSubstring_Quick solution;
    int ret = solution.lengthOfLongestSubstring(test_string);
    printf("test_string:%s\n", test_string.c_str());
    printf("test_result:%d\n", ret);
    getchar();
}

int SLT_LengthOfLongestSubstring_Quick::lengthOfLongestSubstring(string s)
{
    vector<int> dict(256, -1);
    int maxLen = 0, start = -1;
    for (int i = 0; i != s.length(); i++) {
        if (dict[s[i]] > start)
            start = dict[s[i]];
        dict[s[i]] = i;
        int tmp = i - start;
        if (maxLen > tmp)
        {

        }
        else
        {
            maxLen = tmp;
        }
    }
    return maxLen;
}
