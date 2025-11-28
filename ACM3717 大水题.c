#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &sum);
	while (sum >= 10)
	{
		n = sum;
		sum = 0;
		while (n)
		{
			sum += n % 10;
			n /= 10;
		}
	}
	printf("%d", sum);
    
	return 0;
}