/*********************************************************************
 * Created:       2017/06/26
 * File name:     longest_substring_without_repeating_characters.h
 * Author:        JiangMian
 * Revision:      1.0.0
 *
 * Copyright (C)  2017 - 2020 , All Rights Reserved.
 *
 * Purpose: 
 *********************************************************************/

#ifndef __LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_2017_06_26__
#define __LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_2017_06_26__
#include "../../base_util/util.h"

class SLT_LengthOfLongestSubstring
{
public:
    SLT_LengthOfLongestSubstring() {};
    virtual ~SLT_LengthOfLongestSubstring() {};
public:
    int lengthOfLongestSubstring(string s);
    int GetMaxOfOneString(string s);
};

class SLT_LengthOfLongestSubstring_Quick
{
public:
    SLT_LengthOfLongestSubstring_Quick() {};
    virtual ~SLT_LengthOfLongestSubstring_Quick() {};
public:
    int lengthOfLongestSubstring(string s);
};

class TestCase_LengthOfLongestSubstring
{
public:
    TestCase_LengthOfLongestSubstring(){};
    virtual ~TestCase_LengthOfLongestSubstring(){};
public:
    void run();
    void runOrgSolution();
    void runQuickSolution();
};

#endif //end ifndef  __LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_2017_06_26__