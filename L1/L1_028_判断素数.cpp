#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    //素数筛要搞一堆越界问题..
    int N,input;cin>>N;
    bool is_prime(true);
    for(int i=0;i<N;i++)
    {
        cin>>input;
        if(input<2)is_prime=false;
        else if(input==2);
        else if(input%2==0)is_prime=false;
        else
        {
            for(int j=3;j<=sqrt(input);j+=2)
            {
                if(input%j==0)
                {
                    is_prime=false;
                    break;
                }
            }
        }
        is_prime?printf("Yes\n"):printf("No\n");
        is_prime=true;
    }
    return 0;
}