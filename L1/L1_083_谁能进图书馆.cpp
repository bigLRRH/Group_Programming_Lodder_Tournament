#include <iostream>
#include <vector>
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
        if (bigger->age < min_age_restriction)
        {
        }
        else if (bigger->age < accompanied_age_requirement)
        {
        }
        else
        {
        }
    }
}