#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f %f", &a, &b);
	if (a / (b * b) >= 18.5 && a / (b * b) <= 23.9)
		printf("Normal");
	else
		printf("Abnormal");
        
	return 0;
}