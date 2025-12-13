#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (int i = 1; i <2020; i++)
	{
		if (i /100 %10  == 9 || i/10 % 10 == 9 || i % 10  == 9)
		{
			count = count + 1;
		}
	}
	printf("%d", count);
    
	return 0;
}