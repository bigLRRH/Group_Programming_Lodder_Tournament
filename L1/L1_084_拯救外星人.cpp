#include <iostream>
using namespace std;

int factorial(int x)
{
    if(x==1)return x;
    return x*factorial(x-1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int sum = a+b;
    cout<<factorial(sum);
}