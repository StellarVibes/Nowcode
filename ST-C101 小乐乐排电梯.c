#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	scanf("%d", &i);
	if (i % 12 == 0 && i != 0)
		printf("%d", i / 12 * 4 - 2);
	else if (i == 0)
		printf("2");
	else 
		printf("%d", i / 12 * 4 + 2);

	return 0;
}