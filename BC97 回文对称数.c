#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int a = i,b = 0;
		int arr[6] = { 0 };
		while (a)
		{
			arr[b] = a % 10;
			a /= 10;
			b += 1;
		}
		int left = 0,right = b-1,flage = 1;
		while (flage)
		{
			if (left <= right)
			{
				if (arr[left] != arr[right])
				{
					flage = 0;
				}
				left++;
				right--;
			}
			if (left > right)
			{
				break;
			}
		}
		if (flage == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}