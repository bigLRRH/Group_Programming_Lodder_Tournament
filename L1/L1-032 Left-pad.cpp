#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    char c;
    string s;
    cin>>n>>c;
    getchar();
    getline(cin,s);
    int len = s.length();
    if(len>=n)
        for(int i=len-n;i<len;i++)
            cout<<s[i];
    else
    {
        for(int i=0;i<n-len;i++)
            cout<<c;
        cout<<s;
    }
    cout<<endl;
    return 0;
}