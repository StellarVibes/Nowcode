#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	long long n = 0;
	int x = 0;
	int count = 0;
	scanf("%lld %d", &n, &x);
	for (int i = 1; i <= n; i++)
	{
		int a = i;
		while (a)
		{
			if (a % 10 == x)
			{
				count++;
			}
			a /= 10;
		}
	}
	printf("%d", count);
    
	return 0;
}