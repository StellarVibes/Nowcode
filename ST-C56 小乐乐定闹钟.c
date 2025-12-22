#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int k = 0;
	int x = 0;
	scanf("%d:%d %d", &a,&b,&k);
	x = a * 60 + b+ k;
	printf("%02d:%02d",x/60%24, x % 60);

	return 0;
}