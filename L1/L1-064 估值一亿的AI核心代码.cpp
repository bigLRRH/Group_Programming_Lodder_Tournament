#include <iostream>
#include <string>
using namespace std;
// 无论用户说什么，首先把对方说的话在一行中原样打印出来；
// 消除原文中多余空格：把相邻单词间的多个空格换成 1 个空格，把行首尾的空格全部删掉，把标点符号前面的空格删掉；
// 把原文中所有大写英文字母变成小写，除了 I；
// 把原文中所有独立的 can you、could you 对应地换成 I can、I could—— 这里“独立”是指被空格或标点符号分隔开的单词；
// 把原文中所有独立的 I 和 me 换成 you；
// 把原文中所有的问号 ? 换成惊叹号 !；
// 在一行中输出替换后的句子作为 AI 的回答。
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        getline(cin,s);
        //删除首尾空格
        s.erase(0,s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);
    }
}