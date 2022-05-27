#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string a,b,tmp; 
    int flag(0);
    for(int i=1;i<15;i++)
    {
        cin>>tmp;
        if(tmp==".")break;
        if(i==2)
        {
            a=tmp;
            flag =1;
        }
        if(i==14)
        {
            b=tmp;
            flag =2;
        }
    }
    if(flag==0)
        cout<<"Momo... No one is for you ..."<<endl;
    else if(flag ==1)
        printf("%s is the only one for you...\n",&a[0]);
    else
        printf("%s and %s are inviting you to dinner...\n",&a[0],&b[0]);
    return 0;
}