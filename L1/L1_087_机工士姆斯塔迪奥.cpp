#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    int N, M, Q;
    unordered_set<int> rows_selected;
    unordered_set<int> cols_selected;

    cin >> N >> M >> Q;
    for (int i = 0; i < Q; ++i)
    {
        int Ti, Ci;
        cin >> Ti >> Ci;
        if (Ti == 0)
        {   // 选中行
            // c++20: if(!rows_selected.contains(Ci))
            if (rows_selected.count(Ci) == 0)
            {
                rows_selected.insert(Ci);
                --N;
            }
        }
        else
        {   // 选中列
            // c++20: if(!cols_selected.contains(Ci))
            if (cols_selected.count(Ci) == 0)
            {
                cols_selected.insert(Ci);
                --M;
            }
        }
    }
    cout << N * M << endl;
    return 0;
}