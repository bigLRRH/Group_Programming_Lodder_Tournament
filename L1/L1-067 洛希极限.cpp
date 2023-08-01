#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double a,c;
    int b;
    cin>>a>>b>>c;
    double ans = a*(b?1.26:2.455);
    printf("%.2lf %s",ans,&(ans<c?"^_^\n":"T_T\n"));
}