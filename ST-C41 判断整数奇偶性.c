#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	while (scanf("%d", &i) != -1)
    {
        if (i % 2 == 0)
			printf("Even\n");
		else printf("Odd\n");
    }
	return 0;
}