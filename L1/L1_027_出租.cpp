#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    //输入
    string tel;
    cin>>tel;
    //生成arr
    vector<int> arr;
    int note[10]={0};
    for(char i:tel)
    {
        note[i-'0']++;
    }
    for(int i=9;i>=0;i--)
    {
        if(note[i])
            arr.push_back(i);
    }
    //生成index
    int index[11];
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(tel[i]-48==arr[j])
            {
                index[i]=j;
            }
        }
    }
    //输出
    cout<<"int[] arr = new int[]{"<<arr[0];
    for(int i=1;i<arr.size();i++)cout<<","<<arr[i];
    cout<<"};"<<endl;
    
    cout<<"int[] index = new int[]{"<<index[0];
    for(int i=1;i<11;i++)cout<<","<<index[i];
    cout<<"};"<<endl;
    return 0;
}