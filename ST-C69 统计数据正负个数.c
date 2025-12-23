#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int count = 0;
	while (scanf("%d", &a) != -1)
    {
        if (a > 0)
			count = count + 1;
    }
	printf("positive:%d\nnegative:%d", count,10-count);

	return 0;
}