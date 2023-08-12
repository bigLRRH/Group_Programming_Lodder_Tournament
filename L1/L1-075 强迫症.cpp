#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int year;
    int month;
    if (s.size() == 4)
    {
        year = stoi(s.substr(0, 2));
        if (year < 22)
            year += 2000;
        else
            year += 1900;
        month = stoi(s.substr(2, 2));
    }
    else
    {
        year = stoi(s.substr(0, 4));
        month = stoi(s.substr(4, 2));
    }

    printf("%d-%02d",year,month);
    // cout << year << "-" << month << endl;
    return 0;
}