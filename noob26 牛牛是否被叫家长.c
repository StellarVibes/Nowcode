#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0,b = 0,c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b + c) / 3 >= 60)
		printf("NO");
	else
		printf("YES");

	return 0;
}