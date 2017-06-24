#include "solution_two_num.h"
#include <unordered_map>

vector<int> SLT_TwoNum::twoSum(vector<int>& nums, int target)
{
    vector<int> ret;
    if (nums.size() <= 0)
    {
        return ret;
    }

    bool found = false;
    int first_idx = 0;
    int second_idx = 0;
    for (vector<int>::iterator first_iter = nums.begin(); first_iter != nums.end(); ++first_iter, ++first_idx)
    {
        second_idx = first_idx+1;
        for (vector<int>::iterator second_iter = first_iter+1; second_iter != nums.end(); ++second_iter, ++second_idx)
        {
            int sum = *first_iter + *second_iter;
            if (sum == target)
            {
                found = true;
                ret.push_back(first_idx);
                ret.push_back(second_idx);
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    return ret;
}

void TestCase_TwoNum::run()
{
    runHashSolution();
}

void TestCase_TwoNum::runOrgSolution()
{
    vector<int> array = { 3, 4, 1, 9, 11, 7 };
    vector<int> ret;
    int target = 12;

    SLT_TwoNum solution;
    ret = solution.twoSum(array, target);
    int idx = 0;
    for (vector<int>::iterator iter = ret.begin(); iter != ret.end(); ++iter, ++idx)
    {
        printf("ret[%d]:%d", idx, *iter);
    }
    getchar();
}

void TestCase_TwoNum::runHashSolution()
{
    vector<int> array = { 3, 4, 1, 9, 11, 7 };
    vector<int> ret;
    int target = 12;

    SLT_TwoNumWithHash solution;
    ret = solution.twoSum(array, target);
    int idx = 0;
    for (vector<int>::iterator iter = ret.begin(); iter != ret.end(); ++iter, ++idx)
    {
        printf("ret[%d]:%d", idx, *iter);
    }
    getchar();
}

vector<int> SLT_TwoNumWithHash::twoSum(vector<int>& nums, int target)
{
    vector<int>ret;

    unordered_map<int, int> nums_hash;  //key number_value;  value: number_value idx in nums
    size_t total_size = nums.size();

    for (size_t idx = 0; idx < total_size; ++idx)
    {
        int self_value = nums[idx];
        int target_peer_value = target - self_value;
        auto iter = nums_hash.find(target_peer_value);
        if (iter == nums_hash.end())  //no found target, just cache self
        {
            nums_hash[self_value] = (int)idx;
        }
        else                          //found target
        {
            int first_idx = (int)idx;
            int second_idx = iter->second;
            ret.push_back(first_idx);
            ret.push_back(second_idx);
            break;
        }
    }

    return ret;
}
