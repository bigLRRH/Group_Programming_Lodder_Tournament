#include <iostream>
using namespace std;
int main()
{
    int N;
    int A, B, C;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> A >> B >> C;
        if (C == A * B)
        {
            cout << "Lv Yan";
        }
        else if (C == A + B)
        {
            cout << "Tu Dou";
        }
        else
        {
            cout << "zhe du shi sha ya!";
        }
        cout << endl;
    }
    return 0;
}