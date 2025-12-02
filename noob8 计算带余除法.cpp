#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	printf("%d ",a/b);
	printf("%d ", a % b);
    
	return 0;
}