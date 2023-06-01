#include <iostream>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int canRead(k * m);
    if (canRead > n)
        cout << 0 << endl;
    else
        cout << n - canRead << endl;
    return 0;
}