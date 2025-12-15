#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0,b = 0,r = 0,c = 0;
	scanf("%d%d%d%d", &a, &b, &r, &c);
	printf("%d\n", a * b);
	printf("%g\n", 3.14 * r * r);
	printf("%d\n", c * c);
    
	return 0;
}