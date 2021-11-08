#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    int c[128] = {0},i;
    getline(cin,a);
    getline(cin,b);
    for(i=0;i<b.size();i++)
        c[b[i]]++;
    for(i=0;i<a.size();i++)
        if(c[a[i]]==0)
            cout<<a[i];
    
    cout<<endl;
    return 0;
}