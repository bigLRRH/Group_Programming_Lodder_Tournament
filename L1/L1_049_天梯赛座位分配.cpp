#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int N,
        school_teams[101]={0},cnt_number[11]={0},
        seat,offset;
    
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>school_teams[i];
        cnt_number[school_teams[i]]++;
    }

    for(int i=1;i<=N;i++)
    {
        printf("#%d\n",N);
        offset = N;       
        for(int j  = 0;j < m[i] ; j++)
        {