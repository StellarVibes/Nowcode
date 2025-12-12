#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("2 ");
	if (a % 3 == 0)
		printf("3 "); 
	if (a % 7 == 0)
		printf("7 ");
	if (a % 2 != 0&& a % 3 != 0&& a % 7 != 0)
		printf("n ");
        
	return 0;
}