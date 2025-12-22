#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int flage = 1;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (arr[0] > arr[n - 1])
	{
		int a = 0;
		while (arr[a+1])
		{
			if (arr[a] < arr[a + 1])
			{
				flage = 0;
			}
			a++;
		}
	}
	else if (arr[0] == arr[n - 1])
	{
		int a = 0;
		while (arr[a+1])
		{
			if (arr[a] != arr[a + 1])
			{
				flage = 0;
			}
			a++;
		}
	}
	else
	{
		int a = 0;
		while (arr[a+1])
		{
			if (arr[a] > arr[a + 1])
			{
				flage = 0;
			}
			a++;
		}
	}
	if (flage == 1)
	{
		printf("sorted");
	}
	else
	{
		printf("unsorted");
	}

	return 0;
}