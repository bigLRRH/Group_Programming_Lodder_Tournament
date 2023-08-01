#include <iostream>
#include <string>

using namespace std;

int count(int x);

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        switch (s[i])
        {
        case '-':
            cout<<"fu";
            break;
        case '0':
            cout<<"ling";
            break;
        case '1':
            cout<<"yi";
            break;
        case '2':
            cout<<"er";
            break;
        case '3':
            cout<<"san";
            break;
        case '4':
            cout<<"si";
            break;
        case '5':
            cout<<"wu";
            break;
        case '6':
            cout<<"liu";
            break;
        case '7':
            cout<<"qi";
            break;
        case '8':
            cout<<"ba";
            break;
        case '9':
            cout<<"jiu";
            break;
        default:
            break;
        }
        if(i<s.size()-1)
            cout<<' ';
    }
    cout<<endl;

    return 0;
}