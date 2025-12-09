#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int function(int q)
{
	return q * q * q * q;
}

int main()
{
	int a = 0,b = 0,count = 0,tmp = 0;
	int arr[10] = { 0 };
	int arr1[100] = { 0 };
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		int n = i;
		int m = 1;
		int w = 0;
		while (n)
		{
			arr[m] = n % 10;
			int p=function(arr[m]);
			n /= 10;
			m++;
			count++;
			w += p;
		}
		if (i == w)
		{
			arr1[tmp] = i;
			tmp++;
		}
	}
	for (int i = 0; i < tmp; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}