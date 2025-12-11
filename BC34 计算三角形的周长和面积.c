#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	float n = 0;
	float p = 0;
    float i = 0;
	scanf("%d %d %d", &a, &b, &c);
	i = a + b + c;
	p = i / 2;
	n = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("circumference=%.2f area=%.2f",i,n);

	return 0;
}