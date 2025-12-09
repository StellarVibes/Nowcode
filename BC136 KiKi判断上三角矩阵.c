#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,flage = 1,o = 0;
	scanf("%d", &n);
	int arr[100] = { 1 };
	for (int i = 1; i <= n * n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++)
	{
		int a = i;
		o = n + 1 + (i - 1) * n;
		while (a)
		{
			if (arr[o]!=0)
			{
				flage = 0;
			}
			o++;
			a--;
		}
	}
	if (flage)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
    
	return 0;
}