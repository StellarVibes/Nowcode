#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,x = 0,count = 0;
    int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}