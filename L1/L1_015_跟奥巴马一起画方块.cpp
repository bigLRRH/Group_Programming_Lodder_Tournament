#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    int row = n%2==0?n/2:n/2+1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<n;j++)
            cout<<c;
        cout<<endl;
    }

    return 0;
}