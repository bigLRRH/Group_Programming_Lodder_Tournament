#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;
    char a[1001][100];
    cin>>n;
    getchar();
    getline(cin,s);
    int len = s.length();
    int column = len/n;
    if(len%n==0)column--;
    int tmp(0);
    for(int j = column;j>=0;j--)
    {
        for(int i = 0;i<n;i++)
        {
            if(tmp<len)
            {
                a[i][j] = s[tmp];
                tmp++;
            }
            else
            {
                a[i][j]=' ';
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<=column;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}