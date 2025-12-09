#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int max = 1;
	scanf("%d", &n);
	int arr[1000] = { 0.0 };
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		float j = 2;
		for (j = 2; j < arr[i];j++)
		{
			if (arr[i] / (j*1.0) == j)
			{
				arr[i] = 0;
				break;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
    
	return 0;
}