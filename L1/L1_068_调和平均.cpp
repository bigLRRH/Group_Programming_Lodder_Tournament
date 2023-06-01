#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int N;
    double input,harmonic_mean(0);
    cin>>N;
    for(int i=0;i<N;++i)
    {
        cin>>input;
        harmonic_mean+=1/input;
    }
    printf("%.2lf",1/(harmonic_mean/N));
    return 0;
}