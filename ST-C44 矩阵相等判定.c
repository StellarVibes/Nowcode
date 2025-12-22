#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int x = 0,y = 0,flage = 1;
	int arr[100] = { 0 };
	scanf("%d%d", &x, &y);
	for (int i = 1; i <=2* x * y; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a = x * y;
	int i = 1;
	while (a)
	{
		if (arr[i] != arr[i + x * y])
		{
			flage = 0;
		}
		i++;
		a--;
	}
	if (flage)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}