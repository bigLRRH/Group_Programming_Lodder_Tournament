#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    cout<<5000-x*y/2-(100-x)*(100-y)/2-(100-x)*y<<endl;
}