#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char a = 0;
	int i = 0;
	float b = 0;
	scanf("%c\n%d\n%f", &a, &i, &b);
	printf("%c %d %.6f", a, i, b);
    
	return 0;
}