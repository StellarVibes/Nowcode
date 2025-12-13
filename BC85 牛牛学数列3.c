#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

float function(int n)
{
	if (n%2 == 1)
	{
		return  1.000 / n;
	}
	else
	{
		return (-1.000 )/ n;
	}
}

int main()
{
	int n = 0;
	float sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += function(i);
	}
	printf("%.3f", sum);
    
	return 0;
}