#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float f = 0;
	float c = 0;
	scanf("%f", &f);
	printf("%.3lf", 5/9.0*(f-32));
    
	return 0;
}