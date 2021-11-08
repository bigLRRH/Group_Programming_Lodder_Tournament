#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //输入
    int n;cin>>n;
    string inf[n][3];
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin>>inf[i][j];

    //输出
    int m;cin>>m;
    for(int i=0;i<m;i++){
        string testSeatNumber;cin>>testSeatNumber;
        for(int j=0;j<n;j++)
            if(inf[j][1]==testSeatNumber){
                cout<<inf[j][0]<<' '<<inf[j][2]<<endl;
                break;
            }
    }
    
    return 0;
}