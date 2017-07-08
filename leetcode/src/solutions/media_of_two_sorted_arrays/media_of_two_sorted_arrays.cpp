#include "media_of_two_sorted_arrays.h"
#include <set>


double SLT_MediaOfTwoSortedArrays::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    double ret = 0.0;

    size_t total = nums1.size() + nums2.size();

    set<size_t> midle_idx;
    size_t max = 0;
    if (total % 2 == 0)
    {
        midle_idx.insert(total / 2 - 1);
        midle_idx.insert(total / 2 );
        max = total / 2 + 1;
    }
    else
    {
        midle_idx.insert(total / 2);
        max = total / 2;
    }
    auto iter1 = nums1.begin();
    auto iter2 = nums2.begin();
    
    vector<int> result;
    for (size_t idx = 0; idx <= max; ++idx)
    {
        auto iter = midle_idx.find(idx);
        bool insert = iter != midle_idx.end();
        int num = 0;
        if (iter1 == nums1.end() && iter2 == nums2.end())
        {
            break;
        }

        if (iter1 == nums1.end() && iter2 != nums2.end())
        {
            num = *iter2;
            ++iter2;
        }

        if (iter1 != nums1.end() && iter2 == nums2.end())
        {
            num = *iter1;
            ++iter1;
        }

        if (iter1 != nums1.end() && iter2 != nums2.end())
        {
            if (*iter1 <= *iter2)
            {
                num = *iter1;
                ++iter1;
            }
            else
            {
                num = *iter2;
                ++iter2;
            }
        }

        if (insert)
        {
            result.push_back(num);
        }
    }

    double result_total = 0.0;
    for (auto iter = result.begin(); iter != result.end(); ++iter)
    {
        result_total += *iter;
    }
    int size = result.size();
    ret = result_total / (double)size;

    return ret;
}

void TestCase_MediaOfTwoSortedArrays::run()
{
    vector<int> nums1 = { 1, 2, 3 };
    vector<int> nums2 = { 8, 9, 10 };

    SLT_MediaOfTwoSortedArrays solution;
    double ret = solution.findMedianSortedArrays(nums1, nums2);

    cout << "result:" << ret << endl;

    getchar();
}
