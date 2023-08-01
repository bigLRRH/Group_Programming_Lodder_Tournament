#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int N;
    int s, max_s, min_s, count_max_s(1), count_min_s(1);
    cin >> N;
    cin >> s;
    max_s = s;
    min_s = s;
    for (int i = 1; i < N; ++i)
    {
        cin >> s;
        if (s > max_s)
        {
            max_s = s;
            count_max_s = 1;
        }
        else if (s == max_s)
            ++count_max_s;

        if (s < min_s)
        {
            min_s = s;
            count_min_s = 1;
        }
        else if (s == min_s)
            ++count_min_s;
    }
    printf("%d %d\n",min_s,count_min_s);
    printf("%d %d",max_s,count_max_s);
    return 0;
}