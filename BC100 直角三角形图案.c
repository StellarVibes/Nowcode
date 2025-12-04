#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=-1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}