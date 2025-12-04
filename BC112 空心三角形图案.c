#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != -1)
	{
		printf("*\n");
		for (int i = 0; i < n - 2; i++)
		{
			int a = i;
			printf("* ");
			while (a)
			{
				printf("  ");
				a--;
			}
			printf("*\n");
		}
		while (n)
		{
			printf("* ");
			n--;
		}
		printf("\n");
	}
    
	return 0;
}