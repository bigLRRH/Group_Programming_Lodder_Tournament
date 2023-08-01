#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    n=(n+2)%7;
    if(n==0) cout<<7<<endl;
    else cout<<n<<endl;
    return 0;
}