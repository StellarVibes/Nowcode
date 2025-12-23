#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d %d", &a, &b)!= -1)
	{
		if (a > b)
			printf("%d>%d\n", a, b);
		else if (a == b)
			printf("%d=%d\n", a, b);
		else
			printf("%d<%d\n", a, b);
	}

	return 0;
}