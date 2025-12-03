#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0,b = 0,count = 0;
	while(scanf("%d%d", &a, &b)!=-1)
	for (int i = a; i <= b; i++)
	{
		int sum = 0;
		int v = i;
		while (v)
		{
			sum += (v % 10) * (v % 10) * (v % 10);
			v /= 10;
		}
		if (sum == i)
		{
			count++;
			printf("%d ", sum);
		}
	}
	if (count == 0)
	{
		printf("no ");
	}
    
	return 0;
}