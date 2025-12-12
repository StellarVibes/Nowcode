#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int t = 0;
	while (scanf("%d\n", &t) != -1)
	{
		if (t > 0)
		{
			printf("1\n");
		}
		else if (t == 0)
		{
			printf("0.5\n");
		}
		else
		{
			printf("0\n");
		}
	}
    
	return 0;
}