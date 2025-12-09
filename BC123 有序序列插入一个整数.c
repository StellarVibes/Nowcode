#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int  arr[100] = { '0' };
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		getchar();
		scanf("%d", &arr[i]);
	}
	if (arr[n - 1] > arr[0])
	{
		int b = n;
		for (int i = 0; i < n; i++)
		{
			if (arr[b] < arr[b - 1])
			{
				int tmp = arr[b - 1];
				arr[b - 1] = arr[b];
				arr[b] = tmp;
			}
			b--;
		}
	}
	else
	{
		int b = n;
		for (int i = 0; i < n; i++)
		{
			if (arr[b] > arr[b - 1])
			{
				int tmp = arr[b - 1];
				arr[b - 1] = arr[b];
				arr[b] = tmp;
				b--;
			}
			b--;
		}
	}
	for (int i = 0; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
    
	return 0;
}