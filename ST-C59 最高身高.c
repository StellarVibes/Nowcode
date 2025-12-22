#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,max = 0,x = 0,m = 0,y = 0;
    int arr[100] = { 0 };
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n * m; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= n*m; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			x = i;
		}
	}
	if (x%m==0)
	{
		y = m;
		printf("%d %d", x/m, y);
	}
	else
	{
		printf("%d %d", x / m+1, x % m);
	}

	return 0;
}