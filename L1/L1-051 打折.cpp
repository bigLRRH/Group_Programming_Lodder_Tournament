#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int price,discount;
    cin>>price>>discount;
    printf("%.2f",price*discount/10.0);
    return 0;
}