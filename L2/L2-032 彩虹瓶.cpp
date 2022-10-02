#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n, m, k, tmp, cnt;
    bool yes;
    cin >> n >> m >> k;
    while (k--)
    {
        stack<int> s;
        
        cnt = 1;
        yes = true;
        for (int i = 0; i < n; i++)
        {

            cin >> tmp;
            if (tmp == cnt)
            {
                cnt++;
                while (s.size() && s.top() == cnt)
                {
                    s.pop();
                    cnt++;
                }
            }
            else
            {
                s.push(tmp);
                if (s.size() > m)
                {
                    yes = false;
                }
            }
            
        }
        if (yes && cnt>n)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}