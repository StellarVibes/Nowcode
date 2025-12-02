#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("%d", -n / 2);
	else
		printf("%d", (n + 1) / 2);
        
	return 0;
}