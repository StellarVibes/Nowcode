#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p2 - *(int*)p1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
    
	return 0;
}