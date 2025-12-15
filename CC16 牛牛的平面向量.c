#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,a = 0,b = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	for (int i = 0; i < 2 * n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 2 * n; i += 2)
	{
		a += arr[i];
	}
	for (int i = 1; i < 2 * n; i += 2)
	{
		b += arr[i];
	}
	printf("%d %d", a, b);
    
	return 0;
}