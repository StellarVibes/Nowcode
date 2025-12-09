#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

int main()
{
	int a = 0;
	int b = 0;
	int arr[2000] = { 30000 };
	for (int i = 0; i < 2000; i++)
	{
		arr[i] = 30000;
	}
	scanf("%d%d", &a,&b);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = a; i < a+b; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, sizeof(arr) / sizeof(arr[0]),sizeof(int),int_cmp);
	for (int n = 0; n < a + b; n++)
	{
		printf("%d ", arr[n]);
	}
    
	return 0;
}