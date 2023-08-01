#include <iostream>
#include <cstdio>
#include <list>
using namespace std;
struct Student{
    bool sex;
    char name[9];//9改成8不通过。。
};
int main()
{
    int N;cin>>N;
    list<Student> students;
    Student tmp1,tmp2;
    for(int i=0;i<N;i++)
    {
        cin>>tmp1.sex>>tmp1.name;
        students.push_back(tmp1);
    }
    list<Student>::iterator iter;
    while(students.size()>0)
    {
        tmp1 = *students.begin();
        iter = --students.end();
        while(true)
        {
            tmp2 = *iter;
            if(tmp1.sex!=tmp2.sex)
            {
                printf("%s %s\n",&tmp1.name[0],&tmp2.name[0]);
                students.pop_front();
                students.erase(iter);
                break;
            }
            iter--;
        }
    }
    
    return 0;
}