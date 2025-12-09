#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[100] = { '0' };
	scanf("%s", arr);
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 'A')
		{
			count++;
		}
		if (arr[i] == 'B')
		{
			count--;
		}
	}
	if (count > 0)
	{
		printf("A");
	}
	else if (count < 0)
	{
		printf("B");
	}
	else
		printf("E");
        
	return 0;
}