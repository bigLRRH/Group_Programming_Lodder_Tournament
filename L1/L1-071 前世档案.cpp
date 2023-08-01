#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; ++i)
    {
        int result = 1;
        int offset = N-1;
        for (int j = 0; j < N; ++j)
        {
            char c;
            cin >> c;
            if (c == 'y')
            {
            }
            if (c == 'n')
            {
                result += exp2(offset);
            }
            --offset;
        }

        cout << result << endl;
    }
}