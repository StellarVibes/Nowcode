#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int N = 0,M = 0,sum = 0;
	int arr[100] = {-1};
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N * M; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N*M; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
		}
	}
	printf("%d", sum);
    
	return 0;
}