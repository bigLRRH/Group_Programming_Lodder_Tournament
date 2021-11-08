#include <iostream>
using namespace std;

int fact(int x);

int main(){
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=fact(i);
    cout<<sum<<endl;
    
    return 0;
}

int fact(int x){
    if(x==0)return 1;
    else
        return x*fact(x-1);
}