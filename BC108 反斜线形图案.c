#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=-1)
	for (int i = 0; i < n; i++)
	{
		int a = i;
		while (a)
		{
			printf(" ");
			a--;
		}
		printf("*\n");
	}
    
	return 0;
}