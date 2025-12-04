#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
    int q = 0;
	scanf("%d", &i);
	int b = 2 + (i-1) * 3;
	for (int a = 1; a <= 3 * i; a++)
	{
		q = b - a + 1;
		while (q > 0)
		{
			printf(" ");
			q--;
		}
		int v = a;
		int m = i - 1;
			if (v % 3 == 1 && v != 1)
			{
				int o = v/3+1;
				while (o)
				{
					printf("* ");
					int e = 2;
					while (e > 0)
					{
						printf("  ");
						e--;
					}
					o--;
				}
			}
			else if (v % 3 == 2 && v != 2)
			{
				int o = v/3+1;
				while (o)
				{
					printf("* * ");
					int e = 2;
					while (e > 0)
					{
						printf(" ");
						e--;
					}
					o--;
				}
			}
			else
			{
				int t = a;
				while (t)
				{
					printf("* ");
					t--;
				}

			}
			printf("\n");
		}
	for (int a = 1; a <= i; a++)
	{
		q = b;
		while (q > 0)
		{
			printf(" ");
			q--;
		}
		printf("*\n");
	}
    
	return 0;
}