#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    string n;cin>>n;
    int cnt=0,length=n.size();
    float result;
    for(int i=0;i<length;i++)
        if(n[i]=='2')
            cnt++;
    if(n[0]=='-')
        length--;
    result = (double)cnt/length;
    if(n[0]=='-')
        result*=1.5;
    if(n[n.size()-1]%2==0)
        result*=2;
    result*=100;
    printf("%.2f%%\n",result);
    return 0;   
}