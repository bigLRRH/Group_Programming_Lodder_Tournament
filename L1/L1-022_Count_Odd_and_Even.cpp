#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;cin>>n;
    int input,cnt_odd=0,cnt_even=0;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        if(input%2==0)
            cnt_even++;
        else
            cnt_odd++;
    }
    printf("%d %d",cnt_odd,cnt_even);
    return 0;
}