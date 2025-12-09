#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n = 0;
	int arr[100] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int a = i;
		for (int y = 1; y < n-i; y++)
		{
			if (arr[a] == arr[a + y])
			{
				arr[a + y] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		int j = 1;
		for (j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
    
	return 0;
}