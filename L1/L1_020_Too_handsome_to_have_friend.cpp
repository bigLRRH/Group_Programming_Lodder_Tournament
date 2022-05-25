#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    bool is_ugly[100000];
    int N,K,M,tmp;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>K;
        if(K==1)
        {
            cin>>tmp;
            continue;
        }
        for(int j=0;j<K;j++)
        {
            cin>>tmp;
            is_ugly[tmp]=true;
        }
    }
    //输出
    bool is_head(true);
    cin>>M;
    for(int i=0;i<M;i++)
    {
        cin>>tmp;
        if(!is_ugly[tmp])
        {
            is_ugly[tmp] = true;
            //测试点可能会给你0开头的账号，但是int输出的时候会自动省去
            is_head?printf("%05d",tmp),is_head=false:printf(" %05d",tmp);
        }
    }
    if(is_head)cout<<"No one is handsome";
    cout<<endl;
    return 0;
}