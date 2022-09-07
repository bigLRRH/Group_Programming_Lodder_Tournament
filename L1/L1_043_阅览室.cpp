#include <iostream>
#include <cstdio>
using namespace std;
struct Book
{
    bool is_s;
    int s_time;
}book = { false,0 };
int main()
{
    int n;
    Book book[1001] = { 0 };
    int index(0), hh(0), mm(0), sum_time(0), cnt(0);
    char key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            scanf("%d %c %d:%d", &index, &key, &hh, &mm);
            if (index == 0)break;
            if (key == 'S')
            {
                book[index].is_s = true;
                book[index].s_time = hh * 60 + mm;
            }
            else//key == 'E'
            {
                if (book[index].is_s)
                {
                    book[index].is_s = false;
                    sum_time += hh * 60 + mm - book[index].s_time;
                    cnt++;
                }
            }
        }
        printf("%d %.lf\n", cnt, cnt==0?0:(double)sum_time / cnt);
        book->is_s = { 0 };
        sum_time = 0;
        cnt = 0;
    }

}