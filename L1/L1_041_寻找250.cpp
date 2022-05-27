#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    istringstream _s(s);
    int tmp,cnt(0);
    while(_s>>tmp)
    {
        cnt++;
        if(tmp==250)
        {
            cout<<cnt;
            break;
        }
    }
    return 0;
}