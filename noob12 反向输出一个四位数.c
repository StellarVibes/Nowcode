#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,count = 0,i = 0;
	int arr[4] = { 0 };
	scanf("%d", &n);
	for (; i < 4; i++)
	{
		arr[i] = n % 10;
		n /= 10;
		count++;
	}
	i = 0;
	while (count)
	{
		printf("%d", arr[i]);
		i++;
		count--;
	}

	return 0;
}