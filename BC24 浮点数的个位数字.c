#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float i = 0;
	int a = 0;
	scanf("%f", &i);
	a = (int)i;
	printf("%d", a%10);
    
	return 0;
}