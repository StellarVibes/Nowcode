#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 9;
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%d;%f,%f,%f", &i, &a, &b, &c);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",i,a,b,c);

	return 0;
}