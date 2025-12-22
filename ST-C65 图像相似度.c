#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int x = 0,y = 0,count = 0;
	int arr[100] = { -1 };
	int arr1[100] = { -1 };
	scanf("%d%d", &x, &y);
	for (int i = 0; i < x * y; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < x * y; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < x * y; i++)
	{
		
		if (arr[i] == arr1[i] && arr[i] != -1)
		{
			count++;
		}
	}
	printf("%.2f", 100*(count * 1.00) / (x * y));

	return 0;
}