#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int a = 0;
	while (scanf("%d", &n) != -1)
	{
		for (a = n; a > 0; a--)
		{
			int j = a;
			while (j)
			{
				printf("  ");
				j--;
			}
			int c = n - a;
			while (c >= 0)
			{
				printf("*");
				c--;
			}
			printf("\n");
		}
		int b = n;
		while (b >= 0)
		{
			printf("*");
			b--;
		}
		printf("\n");
		for (int a = 1; a <= n; a++)
		{
			int j = a;
			while (j)
			{
				printf("  ");
				j--;
			}
			int c = n - a;
			while (c >= 0)
			{
				printf("*");
				c--;
			}
			printf("\n");
		}
	}
    
	return 0;
}