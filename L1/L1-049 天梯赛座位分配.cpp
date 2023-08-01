#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;                           // 参赛的高校数
    vector<int> school_teams;        // 高校的参赛队伍数
    vector<vector<int>> seat_number; // 座位号
    school_teams.reserve(N);
    seat_number.reserve(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> school_teams[i]; // 第i所高校的参赛队伍数
        seat_number[i].reserve(school_teams[i]);
    }
    while (
        [=]
        {
            for (int i = 0; i < N; ++i)
            {
                if (school_teams[i] != 0)
                    return true;
            }
            return false;
        })
    {
    }
}