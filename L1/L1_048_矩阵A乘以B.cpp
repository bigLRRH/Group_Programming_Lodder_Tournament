#include <iostream>
#include <cstdio>
using namespace std;
void matrix_create(int**m,int r,int c)
{
    m=new int*[r];
    for(int i=0;i<r;i++)
        m[i]=new int[c];
}
int main()
{
    int r[3],c[3],**m[3];
    for(int i=0;i<2;i++)
    {
        cin>>r[i]>>c[i];
        matrix_create(m[i],r[i],c[i]);
        for(int j=0;j<r[i];j++)
            for(int k=0;k<c[i];k++)
                cin>>m[i][j][k];
    }
    if(c[0]==r[1])
    {
        r[2]=r[0];
        c[2]=c[1];
        matrix_create(m[2],r[2],c[2]);
        
        for(int i=0;i<r[2];i++)
            for(int j=0;j<c[2];j++)
            {
                m[2][i][j]=0;
                for(int k=0;k<c[0];k++)
                    m[2][i][j]+=m[0][i][k]*m[1][k][j];
            }
        printf("%d %d\n",r[2],c[2]);
        for(int i=0;i<r[2];i++)
        {
            for(int j=0;j<c[2];j++)
            {
                if(j==0)cout<<m[2][i][j];
                else printf(" %d",m[2][i][j]);
            }
            cout<<endl;
        }

    }
    else
        printf("Error: %d != %d",c[0],r[1]);

    for(int i)
    return 0;
}