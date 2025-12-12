#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x = 0,y = 0,x1 = 0,y1 = 0;
	scanf("%d %d\n", &x, &y);
	scanf("%d %d\n", &x1, &y1);
	if (y1 - y == 1)
		printf("u");
	else if (y1 - y == -1)
		printf("d");
	else if (x1 - x == 1)
		printf("r");
	else
		printf("l");

	return 0;
}