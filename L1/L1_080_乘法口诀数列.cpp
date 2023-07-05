#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    vector<int> v;
    v.push_back(a1);
    v.push_back(a2);
    // 第一项
    cout << a1;
    int tmp = a1 * a2;
    if (tmp >= 10)
    {
        v.push_back(tmp / 10);
        v.push_back(tmp % 10);
    }
    else
    {
        v.push_back(tmp);
    }
    for (int i = 1; i < n; ++i)
    {
        cout << " " << v[i];
        tmp = v[i] * v[i + 1];
        if (tmp >= 10)
        {
            v.push_back(tmp / 10);
            v.push_back(tmp % 10);
        }
        else
        {
            v.push_back(tmp);
        }
    }
    cout << endl;
}