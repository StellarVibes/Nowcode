#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float a = 0;
	float b = 0;
	scanf("%f %f", &a, &b);
	printf("%f", 1 / (1 / a + 1 / b));
    
	return 0;
}