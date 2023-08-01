#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double w,h,j;
    scanf("%lf %lf",&w,&h);
    j=w/pow(h,2);
    printf("%.1lf\n",j);
    if(j>25)
        cout<<"PANG"<<endl;
    else
        cout<<"Hai Xing"<<endl;
    return 0;
}