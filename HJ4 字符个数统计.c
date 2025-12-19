#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[1000] = { 0 };
	long long a = 0;
	long long count = 0;
	for (long long i = 0; i < 1000; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
		{
			a = i;
			break;
		}
	}
	int arr1[127] = { 0 };
	for (long long i = 0; i < 128; i++)
	{
		arr1[i] = i;
	}
	for (long long i = 0; i < a; i++)
	{
		long long j = 0;
		for (j = 0; j <= 127; j++)
		{
			if (arr1[j] == arr[i])
			{
				count++;
				arr1[j] = 11;
			}
		}
	}
	printf("%d", count);
    
	return 0;
}