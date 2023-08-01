#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;               // 帽子的个数
    cin>>N;
    vector<int> answers; // N 顶帽子的颜色
    answers.reserve(N);
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        answers.push_back(tmp);
    }
    int K;
    cin >> K;
    for (int i = 0; i < K; ++i)
    {
        int count_true = 0, count_false = 0, count_abstention = 0;
        for (int j = 0; j < N; ++j)
        {
            int tmp;
            cin >> tmp;
            if (tmp != 0)
            {
                if (tmp == answers[j])
                {
                    ++count_true;
                }
                else
                {
                    ++count_false;
                }
            }
            else
            {
                ++count_abstention;
            }
        }

        if (count_false == 0 && count_true > 0)
        {
            cout << "Da Jiang!!!\n";
        }
        else
        {
            cout << "Ai Ya\n";
        }
    }
    return 0;
}