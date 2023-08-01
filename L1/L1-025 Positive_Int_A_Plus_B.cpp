#include <iostream>
#include <cstdio>
#include <regex>
#include <sstream>
using namespace std;

int main()
{
    //输入
    string a, b;
    int A, B;
    cin >> a;
    getline(cin, b);
    b.erase(0, 1);
    //判断
    bool flag_a(false), flag_b(false);
    regex reg(R"(\d{1,4})");
    istringstream iss;
    if (regex_match(a, reg))
    {
        iss.str(a);
        iss >> A;
        if (A >= 1 && A <= 1000)
        {
            flag_a = true;
        }
    }
    if (regex_match(b, reg))
    {
        iss.clear();
        iss.str(b);
        iss >> B;
        if (B >= 1 && B <= 1000)
        {
            flag_b = true;
        }
    }
    //输出
    printf("%s + %s = %s\n", flag_a ? &to_string(A)[0] : &"?"[0], flag_b ? &to_string(B)[0] : &"?"[0], flag_a && flag_b ? &to_string(A + B)[0] : &"?"[0]);
    return 0;
}