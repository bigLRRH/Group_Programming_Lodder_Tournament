#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0,cnt=0;
    for(int i=a;i<=b;i++)
    {
        sum+=i;
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