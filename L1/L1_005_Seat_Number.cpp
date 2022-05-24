#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //输入
    int n;cin>>n;
    string inf[1001][2];
    //a准考证号,b试机座位号,c考试座位号
    string a,c;
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        inf[b][0] = a;
        inf[b][1] = c;
    }


    //输出
    int m;cin>>m;// M 个待查询的试机座位号码
    int t;//待查询的试机座位号码值
    for(int i=0;i<m;i++){
        cin>>t;
        printf("%s %s\n",&inf[t][0][0],&inf[t][1][0]);
    }
    
    return 0;
}