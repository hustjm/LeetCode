#include "std__map_erase_test.h"
#include <iostream>
#include <map>

void CStdMapEraseTest::RunTest()
{
    std::map<int, int>  tmap;
    for (int i = 0; i < 4; ++i)
    {
        tmap[i] = i * 2;
    }

    auto found_iter = tmap.find(5);  // 不进行判定，found_iter可能是tmap.end()，下面erase就会崩溃
    tmap.erase(found_iter);

}
