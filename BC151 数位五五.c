#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0,b = 0,sum = 0,c = 0,count = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		int c = i;
		sum = 0;
		while (c > 0)
		{
			sum += c % 10;
			c /= 10;
		}
		if (sum%5 == 0)
		{
			count += 1;
		}
	}
	printf("%d", count);

	return 0;
}