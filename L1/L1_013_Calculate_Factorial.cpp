#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int sum(0),tmp(1);
    for(int i=1;i<=n;i++)
    {
        tmp*=i;
        sum+=tmp;
    }
    cout<<sum<<endl;
    
    return 0;
}