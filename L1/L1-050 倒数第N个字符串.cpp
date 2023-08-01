#include <iostream>
using namespace std;
int main()
{
    int L,N;
    char s[7] = "zzzzzz";

    cin>>L>>N;
    
    N--;
    //除26取余
    for(int i=5;i>=0;i--)
    {
        s[i] -= N%26;
        N/=26;
        if(N==0)break;
    }

    for(int i = 6-L;i<7;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    
    return 0;
}