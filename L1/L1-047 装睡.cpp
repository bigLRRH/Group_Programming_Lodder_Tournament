#include <iostream>
using namespace std;
int main()
{
    int n,f,p;
    string name;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name>>f>>p;
        if(f<15||f>20||p<50||p>70)cout<<name<<endl;
    }
    return 0;
}