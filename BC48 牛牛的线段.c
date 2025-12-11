#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	scanf("%d %d\n %d %d", &x1, &y1, &x2, &y2);
	printf("%d", (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    
	return 0;
}