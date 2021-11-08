#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    string n;cin >> n;
    int counter[10];
    for(int &i:counter)
        i=0;
    
    for(char c:n)
        for(int i=0;i<10;i++)
            if(i==c-48)
                counter[i]++;

    for(int i =0;i<10;i++)
        if(counter[i]>0)
            printf("%d:%d\n",i,counter[i]);

    return 0;
}