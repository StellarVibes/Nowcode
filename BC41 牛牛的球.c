#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int r = 0;
	float v = 0;
	scanf("%d", &r);
	v = 3.14 * 4 / 3 * r * r* r;
	printf("%f", v);
    
	return 0;
}