#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	long long n = 0;
	scanf("%lld", &n);
	int a = 0;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		int j = 1;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				a += j;
			}
		}
		if (a == i)
		{
			count++;
			
		}
		a = 0;
	}
	printf("%d", count);
    
	return 0;
}