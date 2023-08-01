#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    char sex;
    double h;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>sex>>h;
        if(sex == 'M')h/=1.09;
        else h*=1.09;
        printf("%.2lf\n",h);
    }
    return 0;
}