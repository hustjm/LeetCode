/*********************************************************************
 * Created:       2017/07/11
 * File name:     longest_palindromic_substring.h
 * Author:        JiangMian
 * Revision:      1.0.0
 *
 * Copyright (C)  2017 - 2020 , All Rights Reserved.
 *
 * Purpose: 
 *********************************************************************/

#ifndef __LONGEST_PALINDROMIC_SUBSTRING_H_2017_07_11__
#define __LONGEST_PALINDROMIC_SUBSTRING_H_2017_07_11__
#include "../../base_util/util.h"

class SLT_LongestPalindromicSubstring
{
public:
    SLT_LongestPalindromicSubstring() {};
    virtual ~SLT_LongestPalindromicSubstring() {};
public:
    string longestPalindrome(string s);
};

class Testcase_LongestPalindromicSubstring
{
public:
    Testcase_LongestPalindromicSubstring() {};
    virtual~Testcase_LongestPalindromicSubstring() {};
public:
    void run();
};

#endif //end ifndef  __LONGEST_PALINDROMIC_SUBSTRING_H_2017_07_11__