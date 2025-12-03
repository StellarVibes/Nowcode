#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0,m = 0,i = 0;
	int arr1[100] = { 0 };
	int arr3[100] = { 0 };
    char arr[100] = { 0 };
	char arr2[100] = { 0 };
	char arr4[100] = { 0 };
	scanf("%d%d", &n, &m);
	for (int i = 0; i <= n; i++)
	{
		scanf("%c", &arr[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		getchar();
		scanf("%d%d %c %c", &arr1[i],&arr3[i], &arr2[i], &arr4[i]);
	}
	for ( int a = 0; a < m; a++)
	{
		for (int i = arr1[a + 1]; i <= arr3[a + 1]; i++)
		{
			if (arr[i] == arr2[a + 1])
			{
				arr[i] = arr4[a + 1];
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}