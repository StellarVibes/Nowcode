#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	for (int i = 1; i < 10; i++)
	{
		int a = i;
		int b = 1;
		while (a)
		{
			if (b * i <= 9)
			{
				printf("%d*%d= %d ", b, i, b * i);
			}
			else
			{
				printf("%d*%d=%d ", b, i, b * i);
			}
			b++;
			a--;
		}
		printf("\n");
	}
    
	return 0;
}