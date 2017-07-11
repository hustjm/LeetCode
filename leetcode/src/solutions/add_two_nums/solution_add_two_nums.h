/*********************************************************************
 * Created:       2017/06/25
 * File name:     solution_add_two_nums.h
 * Author:        JiangMian
 * Revision:      1.0.0
 *
 * Copyright (C)  2017 - 2020 , All Rights Reserved.
 *
 * Purpose: 
 *********************************************************************/

#ifndef __SOLUTION_ADD_TWO_NUMS_H_2017_06_25__
#define __SOLUTION_ADD_TWO_NUMS_H_2017_06_25__

#include "../../base_util/util.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class SLT_AddTwoNums
{
public:
    SLT_AddTwoNums(){};
    virtual ~SLT_AddTwoNums(){};
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

class TestCase_AddTwoNums
{
public:
    TestCase_AddTwoNums(){};
    virtual~TestCase_AddTwoNums(){};

    void GenerateList(ListNode** p_list, std::vector<int>& values);
public:
    void run();
};

#endif //end ifndef  __SOLUTION_ADD_TWO_NUMS_H_2017_06_25__