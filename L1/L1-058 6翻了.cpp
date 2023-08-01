#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='6')
        {
            int cnt(1);
            while(++i<n)
            {
                if(s[i]=='6')
                    cnt++;
                else
                    break;
            }
            if(cnt>3)
            {
                if(cnt>9)
                    cout<<27;
                else
                    cout<<9;
            }
            else
            {
                for(int j=0;j<cnt;j++)
                {
                    cout<<6;
                }
            }
        }
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}