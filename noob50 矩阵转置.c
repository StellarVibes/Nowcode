#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int arr[100] = { -1 };
	for (int i = 0; i < n * m; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < m; i++)
	{
		int j = i;
		int count = 0;
		while (count - n)
		{
			printf("%d ", arr[j]);
			j += m;
			count++;
		}
		printf("\n");
	}
    
	return 0;
}