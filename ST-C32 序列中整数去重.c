#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int a = 0; a < n; a++)
	{
		int j = 0;
		for (j = a; j < n-1; j++) 
		{
			if (arr[a] == arr[j + 1])
			{
				arr[j + 1] = 0;
			}
		}
	}
	for (int b = 0; b < n; b++)
	{
		if (arr[b] != 0)
		{
			printf("%d ", arr[b]);
		}
	}
	return 0;
}