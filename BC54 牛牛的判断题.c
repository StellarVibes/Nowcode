#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x = 0;
	int l = 0;
	int r = 0;
	scanf("%d%d%d", &x, &l, &r);
	if (r >= x && x >= l)
		printf("true");
	else printf("false");
    
	return 0;
}