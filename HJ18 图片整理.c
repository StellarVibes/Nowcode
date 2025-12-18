#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[2000] = { 0 };
	long long a = 0;
	for (long long i = 0; i < 2000; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
		{
			a = i;
			break;
		}
	}
	for (long long i = 0; i < a; i++)
	{
		long long j = 0;
		for (j = 0; j < a - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (long long i = 0; i <= a; i++)
	{
		if (arr[i] != '\n')
		{
			printf("%c", arr[i]);
		}
	}
    
	return 0;
}