#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, idx;
    double tmp(0);
    string *name;
    int *number;
    cin >> N;
    name = new string[N];
    number = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> number[i];
        tmp += number[i];
    }
    tmp = tmp/N/2;
    for (int i = 0; i < N; i++)
    {
        
    }
}