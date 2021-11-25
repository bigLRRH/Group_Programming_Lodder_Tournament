#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin,input);
    int gplt[4]={0};
    for(char c:input)
    {
        switch (c)
        {
        case 'g':
        case 'G':
            gplt[0]++;
            break;
        case 'p':
        case 'P':
            gplt[1]++;
            break;
        case 'l':
        case 'L':
            gplt[2]++;
            break;
        case 't':
        case 'T':
            gplt[3]++;
            break;
        
        default:
            break;
        }
    }
    while (true)
    {
        if(gplt[0])
        {
            cout<<'G';
            gplt[0]--;
        }
        if(gplt[1])
        {
            cout<<'P';
            gplt[1]--;
        }
        if(gplt[2])
        {
            cout<<'L';
            gplt[2]--;
        }
        if(gplt[3])
        {
            cout<<'T';
            gplt[3]--;
        }
        if(!(gplt[0]+gplt[1]+gplt[2]+gplt[3]))
            break;
    }
    cout<<endl;
    return 0;
}