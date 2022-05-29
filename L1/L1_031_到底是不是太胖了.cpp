#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int N,H;
    double W,st_W;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>H>>W;
        st_W = (H-100)*0.9*2;
        if(abs(W-st_W)<st_W/10.0)
            cout<<"You are wan mei!"<<endl;
        else
        {
            if(W>st_W)
                cout<<"You are tai pang le!"<<endl;
            else
                cout<<"You are tai shou le!"<<endl;
        }
    }
    return 0;
}