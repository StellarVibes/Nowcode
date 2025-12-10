#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void digit(int x, int i)
{
	int a = x;
	int count = 0;
	while (a)
	{
		a /= 10;
		count++;
	}
	int arr[100] = { -1 };
	for (int q = 0; q < count; q++)
	{
		arr[q] = x % 10;
		x /= 10;
	}
	for (int b = i-1; b >=0; b--)
	{
		printf("%d", arr[b]);
		
	}
}

int main()
{
	int x = 0;
	int i = 0;
	scanf("%d%d", &x, &i);
	digit(x, i);
    
	return 0;
}