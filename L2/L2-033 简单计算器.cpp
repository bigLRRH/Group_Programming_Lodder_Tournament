#include<iostream>
#include <stack>
using namespace std;
int main()
{
	int n, n1, n2;
	char op;
	stack<int> S1;
	stack<char> S2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		S1.push(n1);
	}
	for (int i = 0; i < n - 1; i++)
	{
		cin >> op;
		S2.push(op);
	}
	while (S2.size())
	{
		n1 = S1.top();
		S1.pop();
		n2 = S1.top();
		S1.pop();
		op = S2.top();
		S2.pop();
		switch (op)
		{
		case '+':
			n1 = n2 + n1;
			break;
		case '-':
			n1 = n2 - n1;
			break;
		case'*':
			n1 = n2 * n1;
			break;
		case'/':
			if (n1 == 0)
			{
				cout << "ERROR: " << n2 << "/0" << endl;
				return 0;
			}
			n1 = n2 / n1;
			break;
		default:
			break;
		}
		S1.push(n1);
	}
	cout << S1.top() << endl;
	return 0;
}