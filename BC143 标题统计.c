#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[100] = { 0 };
	int count = 0;
	scanf("%[^\n]", &arr);
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] != 0&&arr[i]!=32)
		{
			count++;
		}
	}
	printf("%d", count);
    
	return 0;
}