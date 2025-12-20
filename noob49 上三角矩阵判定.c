#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	for (int i = 1; i <= n * n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int b = n + 1;
	for (int i = 1; i < n; i++)
	{
		int a = i;
		int c = b;
		while (a)
		{
			if (arr[c]==0)
			{
				count++;
				c++;
			}
			a--;
		}
		b += n;
	}
	if (count == (n * (n - 1)) / 2)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
    
	return 0;
}