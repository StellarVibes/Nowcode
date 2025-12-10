#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void function(int number)
{
	int a = number;
	int count = 0;
	while (a)
	{
		a /= 10;
		count++;
	}
	int arr[100] = {0};
	for (int i = 0; i < count; i++)
	{
		arr[i] = number % 10;
		number /= 10;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%d",arr[i]);
	}
}

int main()
{
	int number = 0;
	scanf("%d", &number);
    function(number);
    
	return 0;
}