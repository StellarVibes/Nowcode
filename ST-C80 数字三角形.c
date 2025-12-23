#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=-1)
	for (int i = 1; i <= n; i++)
	{
		int a = 1;
		while (a<=i)
		{
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
    
	return 0;
}