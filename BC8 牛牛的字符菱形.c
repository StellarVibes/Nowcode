#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char i = 0;
	scanf("%c", &i);
	printf("%3c\n", i);
	printf("%2c%c%c\n", i,i,i);
	printf("%c%c%c%c%c\n",i,i,i,i,i);
	printf("%2c%c%c\n", i,i,i);
	printf("%3c\n", i);

	return 0;
}