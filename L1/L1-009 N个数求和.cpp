//思路来自 https://blog.csdn.net/WZRbeliever/article/details/122395741
#include <iostream>
#include <cstdio>
using namespace std;

//求最大公因数
long long int gcd(long long int a,long long int b);

int main()
{
    int n;cin>>n;
    long long int a,b,sum_a(0),sum_b(1),tmp;//a:=分子,b:=分母
    for(int i=0;i<n;i++)
    {
        scanf("%lld/%lld",&a,&b);
        //通分相加
        sum_a = sum_a*b + a*sum_b;
        sum_b *= b;
        //约分
        tmp = gcd(sum_a,sum_b);
        sum_a/=tmp;
        sum_b/=tmp;
    }
    //输出
    if(sum_a%sum_b==0)
        printf("%lld\n",sum_a/sum_b);
    else if(sum_a<sum_b)
        printf("%lld/%lld\n",sum_a,sum_b);
    else
        printf("%lld %lld/%lld\n",sum_a/sum_b,sum_a%sum_b,sum_b);
    return 0;
}

//求最大公因数
long long int gcd(long long int a,long long int b)
{
    return b ? gcd(b, a % b) : a;
}