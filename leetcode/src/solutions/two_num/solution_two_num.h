/*********************************************************************
 * Created:       2017/06/24
 * File name:     solution_two_num.h
 * Author:        JiangMian
 * Revision:      1.0.0
 *
 * Copyright (C)  2017 - 2020 , All Rights Reserved.
 *
 * Problems:      TwoNum
 * Solution:      1)O(n*n) solution  --> SLT_TwoNum
                  2)O(n)   solution  --> SLT_TwoNumWithHash
 *********************************************************************/

#ifndef __SOLUTION_TWO_NUM_H_2017_06_24__
#define __SOLUTION_TWO_NUM_H_2017_06_24__
#include <iostream>
#include <vector>

using namespace std;

class SLT_TwoNum
{
public:
    SLT_TwoNum(){};
    virtual ~SLT_TwoNum(){};
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

class SLT_TwoNumWithHash
{
public:
    SLT_TwoNumWithHash(){};
    virtual ~SLT_TwoNumWithHash(){};

public:
    vector<int> twoSum(vector<int>& nums, int target);
};

class TestCase_TwoNum
{
public:
    TestCase_TwoNum() {};
    virtual ~TestCase_TwoNum(){};
public:
    void run();
    void runOrgSolution();
    void runHashSolution();
};

#endif //end ifndef  __SOLUTION_TWO_NUM_H_2017_06_24__