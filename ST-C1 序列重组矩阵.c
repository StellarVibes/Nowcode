#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,m = 0,i = 0,j = 0;
	scanf("%d%d", &n, &m);
	int arr[100] = { -1 };
	for (i = 0; i < n * m; i++)
	{
		scanf("%d ", &arr[i]);
	}
	while (j<n*m)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d ", arr[j]);
			j++;
		}
		printf("\n");
	}

	return 0;
}