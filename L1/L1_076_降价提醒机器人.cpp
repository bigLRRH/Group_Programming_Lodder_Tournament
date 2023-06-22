#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int N,M;
    double P;
    cin>>N>>M;
    for(int i=0;i<N;++i)
    {
        cin>>P;
        if(P<M)
        {
            printf("On Sale! %.1lf\n",P);
        }
    }
    return 0;
}