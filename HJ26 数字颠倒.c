#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[100] = { 0 };
	int a = 0;
	for (int i = 0; i < 100; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
		{
			a = i;
			break;
		}
	}
	for (int i = a - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
    
	return 0;
}