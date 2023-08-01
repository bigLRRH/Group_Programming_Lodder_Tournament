#include <iostream>
#include <cstdio>
using namespace std;
bool judge(int y,int n)
{
    int a[10]={0},_n(4);
    for(int i=0,j=y%10;i<4;i++,y/=10,j=y%10)
    {
        a[j]++;
        if(a[j]>=2)_n--;
    }
    return _n==n;
}
int main()
{
    int y,n,cnt(0);
    cin>>y>>n;
    while(!judge(y,n))
    {
        y++;
        cnt++;
    }
    printf("%d %04d\n",cnt,y);
    return 0;
}