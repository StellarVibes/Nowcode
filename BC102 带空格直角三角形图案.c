#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=-1)
	for (int i = 1; i <= n; i++)
	{
		int c = n - i,d = i,j = 0;
		for (j = 0; j < n - i; j++)
		{
			if (c)
			{
				printf("  ");
				c--;
			}
			}
			while (d)
			{
				printf("%s ", "*");
				d--;
			}
		    printf("\n");
	    }

	return 0;
}