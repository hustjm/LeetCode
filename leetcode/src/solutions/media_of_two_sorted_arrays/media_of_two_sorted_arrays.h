/*********************************************************************
 * Created:       2017/07/07
 * File name:     media_of_two_sorted_arrays.h
 * Author:        JiangMian
 * Revision:      1.0.0
 *
 * Copyright (C)  2017 - 2020 , All Rights Reserved.
 *
 * Purpose: 
 *********************************************************************/

#ifndef __MEDIA_OF_TWO_SORTED_ARRAYS_H_2017_07_07__
#define __MEDIA_OF_TWO_SORTED_ARRAYS_H_2017_07_07__

#include "../../base_util/util.h"

using namespace std;

class SLT_MediaOfTwoSortedArrays
{
public:
    SLT_MediaOfTwoSortedArrays() {};
    virtual ~SLT_MediaOfTwoSortedArrays() {};
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};

class TestCase_MediaOfTwoSortedArrays
{
public:
    TestCase_MediaOfTwoSortedArrays() {};
    virtual ~TestCase_MediaOfTwoSortedArrays() {};
public:
    void run();

};


#endif //end ifndef  __MEDIA_OF_TWO_SORTED_ARRAYS_H_2017_07_07__