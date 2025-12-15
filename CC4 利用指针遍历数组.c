#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[6] = { 0 };
	int* p = arr;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", p+i);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", *(p + i));
	}
    
	return 0;
}