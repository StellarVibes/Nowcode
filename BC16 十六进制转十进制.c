#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0xABCDEF;
	scanf("%x", &a);
	printf("%15d", a);
    
	return 0;
}