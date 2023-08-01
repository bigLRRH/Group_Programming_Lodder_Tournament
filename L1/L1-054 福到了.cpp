#include <iostream>
#include <array>
using namespace std;
int main()
{
    char c;
    int n;
    array<array<char, 100>, 100> word = {};
    cin >> c >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            word[i][j] = getchar();
        }
        getchar();
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (word[i][j] != word[n - 1 - i][n - 1 - j])
            {
                flag = false;
            }
    if (flag)
        cout << "bu yong dao le" << endl;
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = n - 1; j >= 0; --j)
            cout << (word[i][j] == ' ' ? ' ' : c);
        cout << endl;
    }
}