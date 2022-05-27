#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int cap_a,cap_b,N;//cap_a:=a的酒量
    cin>>cap_a>>cap_b>>N;
    int a1,a2,b1,b2,tmp,cnt_a(0),cnt_b(0);
    bool a_lose(false);
    for(int i=0;i<N;i++)
    {
        cin>>a1>>a2>>b1>>b2;
        tmp=a1+b1;
        if(a2==b2)continue;
        else if(a2==tmp)
        {
            cnt_a++;
            if(cnt_a>cap_a)
            {
                a_lose=true;
                break;
            }
        }
        else if(b2==tmp)
        {
            cnt_b++;
            if(cnt_b>cap_b)
            {
                a_lose=false;
                break;
            }
        }
        else continue;
    }
    if(a_lose)printf("A\n%d\n",cnt_b);
    else printf("B\n%d\n",cnt_a);
    return 0;
}