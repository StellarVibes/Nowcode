#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
    int a = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &a);
	if (a < arr[0])
	{
		printf("%d ", a);
	}
	for (int i = 0; i < n; i++)
	{
		
		printf("%d ", arr[i]);
		if (a > arr[i] && a < arr[i + 1])
		{
			printf("%d ", a);
		}
	}
	if (a > arr[n - 1])
	{
		printf("%d ", a);
	}

	return 0;
}