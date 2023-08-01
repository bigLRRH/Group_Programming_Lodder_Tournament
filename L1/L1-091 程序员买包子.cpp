#include <iostream>
// #include <format>
#include <cstdio>
using namespace std;
int main()
{
    int N;
    string X;
    int M;
    int K;

    cin >> N >> X >> M >> K;

    //c++ switch case后要跟常量表达式
    if(K==N)
    {
        // cout<<format("mei you mai {} de\n",X);
        printf("mei you mai %s de\n",&X[0]);
    }
    else if(K==M)
    {
        // cout<<format("kan dao le mai {} de\n",X);
        printf("kan dao le mai %s de\n",&X[0]);

    }
    else
    {
        // cout<<format("wang le zhao mai {} de\n",X);
        printf("wang le zhao mai %s de\n",&X[0]);

    }
    return 0;
}