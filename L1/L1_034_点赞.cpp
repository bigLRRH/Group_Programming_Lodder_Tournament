#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,k,f,a[1001]={0},max_f,max_cnt(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>f;
            a[f]++;
            if(a[f]>max_cnt||(a[f]==max_cnt&&f>max_f))
            {
                max_cnt = a[f];
                max_f = f;
            }
        }
    }
    printf("%d %d\n",max_f,max_cnt);
    return 0;
}