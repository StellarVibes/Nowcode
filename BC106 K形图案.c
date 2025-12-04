#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		for (int i = n + 2-j; i > 0; i--)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("*");
	printf("\n");
	for (int i = 1; i <= n; i++)
	{
		int a = i + 1;
		while(a)
		{
			printf("* ");
			a--;
		}
		printf("\n");
	}
    
	return 0;
}