#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 4 == 0&&a % 100 != 0)
	    printf("yes");
	else if (a % 400 == 0)
		printf("yes");
	else  
        printf("no");

	return 0;
}