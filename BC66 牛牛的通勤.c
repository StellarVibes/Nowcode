#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int t1 = 0;
	scanf("%d", &a);
	t1 = 10 + a / 10;
	if (a > t1)
		printf("v");
	else
		printf("w");
        
	return 0;
}