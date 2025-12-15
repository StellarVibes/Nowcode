#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int cat(int* array, int n)
{
	int i = 0;
	int sum = 0;
	while (n)
	{
		sum +=array[i];
		n--;
		i++;
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int* array = arr;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int tmp = cat(arr, n);
	printf("%d", tmp);
    
	return 0;
}