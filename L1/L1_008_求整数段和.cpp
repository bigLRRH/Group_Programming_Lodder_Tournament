#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum((a+b)*(b-a+1)/2),cnt(0);//等差数列求和公式
    for(int i=a;i<=b;i++)
    {
        printf("%5d",i);
        cnt++;
        if(cnt==5){
            cnt=0;
            cout<<endl;
        }
    }
    if(cnt>0)cout<<endl;
    printf("Sum = %d\n",sum);

    return 0;
}