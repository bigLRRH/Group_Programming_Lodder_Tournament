#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

//快速幂
int qpow(int a, int n);

int main(){
    int n;cin>>n;
    printf("2^%d = %d\n",n,qpow(2,n));
    return 0;
}

//快速幂
int qpow(int a, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 1)
        return qpow(a, n - 1) * a;
    else
    {
        int temp = qpow(a, n / 2);
        return temp * temp;
    }
}