#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0,b = 0,c = 0,count = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		c = i;
		while (c)
		{
			if (c %10== 2)
			{
				count += 1;
			}
			c = c / 10;
		}
	}
	printf("%d", count);
    
	return 0;
}