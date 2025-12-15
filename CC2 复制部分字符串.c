#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[100] = { '0' };
	int a = 0;
	int b = 0;
	for (int i = 1; i <= 100; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
		{
			a = i - 1;
			break;
		}
	}
	scanf("%d", &b);
	for (int i = b; i <= a; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}