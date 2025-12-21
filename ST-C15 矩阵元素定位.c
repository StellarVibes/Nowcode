#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,m = 0,a = 0,b = 0;
	int arr[100] = { 0 };
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n * m; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d%d", &a, &b);
	printf("%d", arr[m*(a-1)+b]);
    
	return 0;
}