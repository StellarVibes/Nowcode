#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[n])
		{
			arr[i] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
    
	return 0;
}