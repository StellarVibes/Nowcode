#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int sum = 0;
	int count = 0;
	for (int i = 10000; i < 100000; i++)
	{
		count = 10;
		sum = 0;
		while (i / count)
		{
			sum += (i % count) * (i / count);
			count *= 10;
		}
		if (sum == i)
		{
			printf("%d ",i);
		}
	}
    
	return 0;
}
