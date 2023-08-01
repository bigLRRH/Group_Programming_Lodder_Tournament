#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    struct People
    {
        int id;
        int age;
    };
    int min_age_restriction, accompanied_age_requirement;
    std::cin >> min_age_restriction >> accompanied_age_requirement;
    People q1{1, 0}, q2{2, 0}, *younger, *bigger;
    cin >> q1.age >> q2.age;

    if (q1.age < q2.age)
    {
        younger = &q1;
        bigger = &q2;
    }
    else
    {
        bigger = &q1;
        younger = &q2;
    }

    if (younger->age < min_age_restriction)
    {
        // 两个人都进不去
        if (bigger->age < min_age_restriction)
        {
            printf("%d-N %d-N\n", q1.age, q2.age);
            cout << "zhang da zai lai ba";
        }
        // 一个人能进一个不能
        else if (bigger->age < accompanied_age_requirement)
        {
            printf("%d-%c %d-%c\n",
                   q1.age,
                   q1.age < min_age_restriction ? 'N' : 'Y',
                   q2.age,
                   q2.age < min_age_restriction ? 'N' : 'Y');
            printf("%d: huan ying ru guan", bigger->id);
        }
        // 两个人必须一起进
        else
        {
            printf("%d-Y %d-Y\n", q1.age, q2.age);
            printf("qing %d zhao gu hao %d", bigger->id, younger->id);
        }
    }
    // 两个人都可以进但不是必须一起
    else
    {
        printf("%d-Y %d-Y\n", q1.age, q2.age);
        cout << "huan ying ru guan";
    }
    cout << endl;
}