#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
	int N, pusher[1000], n(0),
		M,
		K, branch[5], k;
	stack<int> box;
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
		cin >> pusher[i];
	while (1)
	{
		k = 0;
		if (box.size())
		{
			branch[k] = box.top();
			box.pop();
		}
		else if (n < N)
			branch[k] = pusher[n++];
		else
			break;
		k++;
		while (k < K)
		{
			if (box.size())
			{
				if (box.top() <= branch[k - 1])
				{
					branch[k++] = box.top();
					box.pop();
				}
				else if (n < N)
				{
					if (pusher[n] <= branch[k - 1])
						branch[k++] = pusher[n++];
					else if (box.size() < M)
						box.push(pusher[n++]);
					else
						break;
				}
				else
					break;
			}
			else if (n < N)
			{
				if (pusher[n] <= branch[k - 1])
					branch[k++] = pusher[n++];
				else if (box.size() < M)
					box.push(pusher[n++]);
				else
					break;
			}
			else
				break;
		}
        cout << branch[0];
		for (int i = 1; i < k; i++)
			printf(" %d", branch[i]);
		cout << endl;
	}
    return 0;
}