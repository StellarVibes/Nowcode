#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,m = 0,sum = 1;
	scanf("%d%d", &n, &m);
	for (int i = n; i >n-m; i--)
	{
		sum *= i;
	}
	printf("%d", sum);
    
	return 0;
}