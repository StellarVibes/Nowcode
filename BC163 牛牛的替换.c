#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,a = 5,b = 5;
	scanf("%d", &n);
	char arr[100] = { '0' };
	for (int i = 1; i <= 5; i++)
	{
		scanf("%s", &arr[i]);
	}
	while (arr[a])
	{
		if (arr[a] == arr[1])
		{
			arr[a] = arr[2];
		}
		if (arr[a] == arr[3])
		{
			arr[a] = arr[4];
		}
		a++;
	}
	while (arr[b])
	{
		printf("%c", arr[b]);
		b++;
	}

	return 0;
}