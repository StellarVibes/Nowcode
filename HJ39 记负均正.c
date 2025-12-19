#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,count = 0,a = 0,b = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] < 0)
		{
			count++;
		}
		if (arr[i] == 0)
		{
			b++;
		}
		if (arr[i] > 0)
		{
			a += arr[i];
		}
	}
	if (b == n)
	{
		printf("0 0.0");
	}
	else
	{
		printf("%d %.1f", count, a * 1.0 / (n - count - b));
	}
    
	return 0;
}