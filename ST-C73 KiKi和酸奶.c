#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c)!=-1)
    {
        if (c % b == 0)
			printf("%d", a - (c / b));
		else 
			printf("%d", a - (c / b+1));
    }
		
	return 0;
}