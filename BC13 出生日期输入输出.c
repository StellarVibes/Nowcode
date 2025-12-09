#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%4d%2d%2d", &a,&b,&c);
	printf("year=%d\n",a);
	printf("month=%02d\n",b);
	printf("date=%02d\n",c);

	return 0;
}