#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,a = 0,c = 0,i = 0,count = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	while (n)
	{
		int i = n;
		i %= 10;
		if (i % 2 == 1)
		{
			arr[count] = 1;
		}
		n /= 10;
		count += 1;
	}
	for (int i = 0; i < count; i++)
	{
		a += arr[i];
	
	for (i = count-1; i >= 0; i--)
	{
		if (arr[i] == 1)
		{
			c = i;
			break;
		}
	}
	if (a != 0)
	{
		while (c>=0)
		{
			printf("%d", arr[c]);
			c--;
		}
	}
	if (a == 0)
	{
		printf("0");
	}

	return 0;
}