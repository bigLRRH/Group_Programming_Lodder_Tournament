#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        getline(cin,s);
        //删除首尾空格
        s.erase(0,s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);
    }
}