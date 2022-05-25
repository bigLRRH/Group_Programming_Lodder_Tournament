#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    int asc[128]({0});//ascii码标记表
    getline(cin,a);
    getline(cin,b);
    for(char c:b)
        asc[c]++;
    for(char c:a)
        if(!asc[c])
            cout<<c;
    cout<<endl;
    return 0;
}