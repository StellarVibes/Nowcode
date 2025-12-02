#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	b = a / 10;
	printf("%d", b % 10);
    
	return 0;
}