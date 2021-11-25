#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,b;
    bool flag = true;
    if(!scanf("%d",&a))
    {
        cout<<'?';
        flag = false;
    }
    else if (a<0)
    {
        cout<<'?';
        flag = false;
    }
    else
    {
        cout<<a;
    }
    
    cout<<" + ";

    if(!scanf("%d",&b))
    {
        cout<<'?';
        flag = false;
    }
    else if (a<0)
    {
        cout<<'?';
        flag = false;
    }
    else
    {
        cout<<b;
    }

    if(flag)
        printf("= %d",a+b);
    else
        cout<<"= ?";
    return 0;
}