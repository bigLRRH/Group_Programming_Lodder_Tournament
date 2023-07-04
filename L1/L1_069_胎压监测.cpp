#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, int> mmap; // 胎压,id
    int low_waring, max_thresold;
    for (int i = 0; i < 4; ++i)
    {
        int tmp;
        cin >> tmp;
        mmap.insert(tmp, i + 1);
    }
    
}
