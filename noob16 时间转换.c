#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &i);
	a = i / 3600;
	b = i % 3600 / 60;
	c = i % 3600 % 60;
	printf("%d %d %d", a, b,c);
    
	return 0;
}