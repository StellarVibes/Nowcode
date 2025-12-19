#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[2000] = { 0 };
	long long b = 0;
	int arr1[1000] = { 0 };
	for (long long i = 0; i < 2000; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] < 65 || arr[i]>122)
		{
			b++;
			arr1[b] = i+1;
			
		}
		if (arr[i] == '\n')
		{
			break;
		}
	}
	long long a = b;
	while (a)
	{
		long long i = 0;
		for (i = arr1[b - 1]; i < arr1[b]-1; i++)
		{
			printf("%c", arr[i]);
		}
		printf(" ");
		a--;
		b--;
	}
    
	return 0;
}