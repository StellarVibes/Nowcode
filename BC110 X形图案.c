#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != -1)
	{
		for (int i = 0; i < n / 2; i++)
		{
			int a = i;
			while (a)
			{
				printf(" ");
				a--;
			}
			printf("*");
			int c = n - 2 - 2 * i;
			while (c > 0)
			{
				printf(" ");
				c--;
			}
			printf("*\n");
		}
		if (n % 2 == 1)
		{
			int o = n / 2;
			while (o)
			{
				printf(" ");
				o--;
			}
			printf("*\n");
		}
		for (int i = n / 2; i > 0; i--)
		{
			int a = i - 1;
			while (a > 0)
			{
				printf(" ");
				a--;
			}
			printf("*");
			int c = n - 2 - 2 * (i - 1);
			while (c > 0)
			{
				printf(" ");
				c--;
			}
			printf("*\n");
		}
	}
    
	return 0;
}