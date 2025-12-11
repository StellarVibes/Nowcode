#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", (a + b - c) * d);

	return 0;
}