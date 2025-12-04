#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void function(int n)
{
	while (n)
	{
		printf("* ");
		n--;
	}
	printf("\n");
}

int main()
{
	int n = 0;
	while (scanf("%d", &n) != -1)
	{
		function(n);
		for (int i = 0; i < n - 2; i++)
		{
			printf("* ");
			int a = n - 2;
			while (a)
			{
				printf("  ");
				a--;
			}
			printf("*");
			printf("\n");
		}
		function(n);
	}
    
	return 0;
}