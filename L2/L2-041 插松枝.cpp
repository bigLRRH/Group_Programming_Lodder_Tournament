#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	int N, n(0), M, K, k(0), pusher[1000], branch[5];
	stack<int> box;
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)cin >> pusher[i];
	while (n<N||!box.empty())
	{
		k = 0;
		if (!box.empty())
		{
			branch[k] = box.top();
			box.pop();
		}
		else
		{
			branch[k] = pusher[n++];	
		}
		k++;
		while (k < K)
		{
			if (!box.empty())
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
			else
			{
				if (n < N)
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
		}
		cout << branch[0];
		for (int i = 1; i < k; i++)
			printf(" %d", branch[i]);
		cout << endl;
	}
	return 0;
}