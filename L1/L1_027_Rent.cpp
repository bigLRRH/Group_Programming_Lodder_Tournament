#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    string input;cin>>input;
    char arr[5]={'8','2','1','0','3'};
    string index = "";
    for(char c:input)
        for(int i=0;i<5;i++)
        {
            if(c==arr[i])
            index+=1;
            break;
        }
    index.erase(index.end()-1);
    printf("int[] arr = new int[]{8,3,2,1,0};\n");
    printf("int[] index = new int[]{%s}",index);

}