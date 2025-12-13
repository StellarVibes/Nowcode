#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int K = 0,a = 0,i = 1,count = 0,sum = 0;
	scanf("%d", &K);
	while (a < K)
	{
		a += i;
		i++;
		count++;
	}
	for (int i = 1; i <= count; i++)
	{
		sum += i * i;
	}
	sum = sum + (K - a) * count;
	printf("%d", sum);
    
	return 0;
}