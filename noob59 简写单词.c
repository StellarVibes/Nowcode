#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[100] = {0};
	int count = 0;
	while (scanf("%s", &arr[count]) != -1)
	{
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (arr[i] >= 97)
		{
			arr[i] = arr[i]-32;
		}
		printf("%c", arr[i]);
	}
    
	return 0;
}