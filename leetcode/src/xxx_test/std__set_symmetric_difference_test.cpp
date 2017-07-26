#include "std__set_symmetric_difference_test.h"
#include <iostream>
#include <map>
#include <algorithm>  
#include <vector>  
#include <functional> 
#include <set>
void CTest_StdSymmetricDiffrence::RunTest()
{
    std::set<int> old_map;
    std::set<int> new_map;
    std::vector<int> result;

    for (int i = 0; i < 5; ++i)
    {
        new_map.insert(i);
    }

    result.resize(old_map.size() + new_map.size());  //此处一定要先resize，不然下面会崩溃

    std::set_symmetric_difference(old_map.begin(), old_map.end(), new_map.begin(), new_map.end(), result.begin());

    for (auto iter = result.begin(); iter != result.end(); ++iter)
    {
        int value = *iter;
        printf("value  :%d\n", value);
    }
}

