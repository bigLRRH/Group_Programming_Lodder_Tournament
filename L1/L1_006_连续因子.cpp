#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int N; cin >> N;
	//判断N是否为素数
	bool is_prime(true);
	if (N < 2)is_prime = false;
	else if (N == 2);
	else if (N % 2 == 0)is_prime = false;
	else
	{
		for (int j = 3; j <= sqrt(N); j += 2)
		{
			if (N % j == 0)
			{
				is_prime = false;
				break;
			}
		}
	}
	//素数
	if (is_prime)printf("1\n%d\n", N);
	//奇合数
	else if (N % 2 == 1)
		for (int i =3;;i+=2)
		{
			if (N % i == 0)
			{
				printf("1\n%d\n", i);
				break;
			}
		}
	//偶合数
	else
	{
		//求最大长度
		int max_len, tmp(1);
		for (int i = 2;; i++)
		{
			tmp *= i;
			if (N % tmp != 0)//连续n个正整数的积模n!余0
			{
				max_len = i - 1;
				break;
			}
		}
		//求连续因子集上界
		double cap(pow(10,log(N)/max_len));
		//求连续因子
		//如果不存在长度为max_len的连续因子序列，长度为max_len-1的最小连续因子序列就是2开头
		bool flag(true);
		int head(2);
		while (head <= cap)
		{
			tmp = 1;
			for (int i = 0; i < max_len; i++)
				tmp *= head + i;
			if (N % tmp == 0)
			{
				flag = false;
				break;
			}
			head++;
		}
		//输出
		if (flag)
		{
			max_len--;
			head = 2;
		}
		printf("%d\n%d", max_len, head);
		for (int i = 1; i < max_len; i++)
			printf("*%d", head + i);
		cout << endl;
	}
	return 0;
}