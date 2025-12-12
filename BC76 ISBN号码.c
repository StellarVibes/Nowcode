#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int function(int a,int i)
{
	return a * i;
}

int main()
{
    int c = 0;
	char arr[11] = { 0 };
	for (int i = 1; i <= 10; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '-')
		{
			i--;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		c += function(arr[i]-48, i);
	}
	if (c % 11 == 10 && arr[10] == 'X')
	{
		printf("Right");
	}
	else if (c % 11 == arr[10]-48)
	{
		printf("Right");
	}
	else
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%c", arr[i]);
			if (i == 1||i==4||i==9)
			{
				printf("-");
			}
		}
		if (c % 11 != 10)
		{
			printf("%d", c % 11);
		}
		else
		{
			printf("X");
		}
	}

	return 0;
}