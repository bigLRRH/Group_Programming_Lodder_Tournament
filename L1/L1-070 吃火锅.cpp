#include <iostream>
#include <regex>
using namespace std;
int main()
{
    const regex pattern{R"(chi1 huo3 guo1)"};
    smatch match;
    string str;
    int count_msgs{0}, first_appear{0}, appear_num{0};
    while (getline(std::cin, str))
    {
        if (str == ".")
            break;
        ++count_msgs;
        if (regex_search(str, match, pattern))
        {
            ++appear_num;
            if (first_appear == 0)
            {
                first_appear = count_msgs;
            }
        }
    }
    cout << count_msgs << endl;
    if (appear_num == 0)
    {
        cout << "-_-#" << endl;
    }
    else
    {

        cout << first_appear << " " << appear_num << endl;
    }
    return 0;
}