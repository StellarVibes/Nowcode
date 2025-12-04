#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=-1)
	for (int j = 1; j <= n; j++)
	{
		int b = n;
		while(b-j)
		{
			printf(" ");
			b--;
		}
		int v = j;
		while (v)
		{
			printf("* ");
			v--;
		}
		printf("\n");
	}
    
	return 0;
}