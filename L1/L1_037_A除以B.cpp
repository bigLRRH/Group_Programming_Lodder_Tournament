#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>0)
        printf("%d/%d=%.2lf\n",a,b,(double)a/b);
    else if(b<0)
        printf("%d/(%d)=%.2lf\n",a,b,(double)a/b);
    else
        printf("%d/0=Error\n",a);
    return 0;
}