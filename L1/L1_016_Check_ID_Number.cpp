#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string IDnumber;
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int z=0,sum=0;
    char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    bool all_passed = true;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>IDnumber;
        z=0;
        sum=0;

        for(int j=0;j<17;j++)
        {
            if(IDnumber[j]<'0' || IDnumber[j]>'9')
            {
                all_passed = false;
                cout<<IDnumber<<endl;
                goto label;
            }
            sum+=weight[j]*(IDnumber[j]-'0');
        }
        z = sum%11;
        if(m[z]==IDnumber[17])
            continue;
        else
        {
            cout<<IDnumber<<endl;
            all_passed = false;
        }

        label:
            ;
    }

    if(all_passed)cout<<"All passed"<<endl;

    return 0;
}