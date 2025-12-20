#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,sum = 0,a = 0;
	scanf("%d", &n);
	while (n > 0)
	{
		a = n % 10;
		sum += a;
		n = n / 10;
	}
	printf("%d", sum);
    
	return 0;
}