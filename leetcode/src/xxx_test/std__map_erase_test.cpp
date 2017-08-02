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

    auto found_iter = tmap.find(5);  // �������ж���found_iter������tmap.end()������erase�ͻ����
    tmap.erase(found_iter);

}
