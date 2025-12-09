#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0,count = 0,b = 1,max = 0,min = 100,flage = 0,a = 0;
	int arr1[100] = { 0 };
	char arr[100] = { 0 };
	scanf("%s", &arr);
	while (arr[i])
	{
		count++;
		i++;
	}
	while(count)
	{
		b = 1;
		while (arr[a + b])
		{
			if (arr[a] == arr[a + b]&&arr[a]>96)
			{
				arr[a + b] = count;
			}
			b++;
		}
		if (arr[a] > 96)
		{
			arr[a] = count;
		}
		a++;
		count--;
    }
	for(int u = 0;u<i;u++)
	{
		arr1[u] = 1;
		for (int j = -1; j < i; j++)
		{
			if (arr[u] == arr[j + 1])
			{
				arr1[u]++;
			}
		}
	}
	int s = i;
	while (s>0)
	{
		if (max < arr1[s-1])
		{
			max = arr1[s-1];
		}
		s--;
	}
	while (i > 0)
	{
		if (min > arr1[i-1])
		{
			min = arr1[i-1];
		}
		i--;
	}
	int m = max - min;
	for (int v = 2; v <= m; v++)
	{
		if (m % v == 0)
		{
			flage = 1;
		}
	}
	if (flage)
	{
		printf("Lucky Word\n");
		printf("%d", m);
	}
	else
	{
		printf("No Answer\n");
		printf("0");
	}
	return 0;
}