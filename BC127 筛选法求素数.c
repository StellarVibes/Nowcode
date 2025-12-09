#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,count = 1,flag = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		int a = 0;
		flag = 1;
		for (a = 2; a < i; a++)
		{
			if (i % a == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("%d", n - count);
    
	return 0;
}