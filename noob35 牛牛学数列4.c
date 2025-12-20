#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,sum = 0,a = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a += i;
		sum += a;
	}
	printf("%d", sum);
    
	return 0;
}