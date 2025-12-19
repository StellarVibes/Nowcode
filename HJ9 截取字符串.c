#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[1000] = { '0' };
	int n = 0;
	for (int i = 0; i < 1000; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
		{
			break;
		}
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}
    
	return 0;
}