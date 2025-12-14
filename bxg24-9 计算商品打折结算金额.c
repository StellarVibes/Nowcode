#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 100&&a<500)
		printf("%.1f", a * 0.9);
	else if (a>=500&&a<2000)
		printf("%.1f", a * 0.8);
	else if (a >= 2000 && a < 5000)
		printf("%.1f", a * 0.7);
	else if (a >= 5000)
		printf("%.1f", a * 0.6);
        
	return 0;
}