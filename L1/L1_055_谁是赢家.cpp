#include <iostream>
#include <cstdio>

#define a 0
#define b 1

using namespace std;
int main()
{
    int p1[2], p2[2], P1, P2;
    string x;
    cin >> p1[a] >> p1[b];
    for (int i = 0; i < 3; i++)
    {
        int tmp;
        cin >> tmp;
        p2[tmp]++;
    }
    if (p2[a] == 0)
    {
        x = "b";
        P1 = p1[b];
        P2 = p2[b];
    }
    else if (p2[b] == 0)
    {
        x = "a";
        P1 = p1[a];
        P2 = p2[a];
    }
    else
    {
        if (p1[a] > p1[b])
        {
            x = "a";
            P1 = p1[a];
            P2 = p2[a];
        }
        else if (p1[a] < p1[b])
        {
            x = "b";
            P1 = p1[b];
            P2 = p2[b];
        }
        else
        {
            if (p2[a] > p2[b])
            {
                x = "a";
                P1 = p1[a];
                P2 = p2[a];
            }
            else
            {
                x = "b";
                P1 = p1[b];
                P2 = p2[b];
            }
        }
    }
    printf("The winner is %s: %d + %d",x[0],P1,P2);
}