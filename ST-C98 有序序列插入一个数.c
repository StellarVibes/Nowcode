#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int b = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		
	}
	scanf("%d", &b);
	for (int i = 0; i < n;i++)
	{
		int j = 0;
		for (j = 0; j < n - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	if (n == 1)
	{
		if (b > arr[0])
		{
			printf("%d %d", arr[0], b);
		}
		else
		{
			printf("%d %d", b, arr[0]);
		}
	}
	else
	{
		if (b < arr[0])
		{
			printf("%d ", b);
		}
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
			if (b > arr[i] && b < arr[i + 1])
			{
				printf("%d ", b);
			}
		}
		if (b > arr[n - 1])
			{
				printf("%d ", b);
			}
	}
    
	return 0;
}