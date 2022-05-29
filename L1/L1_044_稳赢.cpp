#include <iostream>
using namespace std;
int main()
{
    int K,cnt(0);
    cin>>K;
    string s("1");
    while(true)
    {
        cin>>s;
        if(s=="End")break;
        cnt++;
        if(cnt>K)
        {
            cout<<s<<endl;
            cnt=0;
        }
        else
        {
            if(s=="ChuiZi")
                cout<<"Bu"<<endl;
            else if(s=="JianDao")
                cout<<"ChuiZi"<<endl;
            else
                cout<<"JianDao"<<endl;
        }

    }
    return 0;
}