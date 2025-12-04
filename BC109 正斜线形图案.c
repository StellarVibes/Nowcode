#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=-1)
	for (int i = n; i >0; i--)
	{
		int a = i - 1;
		while (a)
		{
			printf(" ");
			a--;
		}
		printf("*");
		printf("\n");
	}
    
	return 0;
}