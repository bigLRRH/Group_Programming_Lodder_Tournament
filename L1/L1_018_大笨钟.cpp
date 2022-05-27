#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int hh,mm,countDang;
    string Dang = "Dang";
    scanf("%d:%d",&hh,&mm);
    if(hh<12 || (hh==12&&mm==0))
    {
        printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
        return 0;
    }
    countDang=mm>0?hh-12+1:hh-12;
    for(int i=0;i<countDang;i++)
        cout<<Dang;
    cout<<endl;
    return 0;
}