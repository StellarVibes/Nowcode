#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int h = 0;
	int r = 0;
	float v = 0;
	scanf("%d %d", &h, &r);
	v = h * r * r * 3.14;
	//	if (10 % v == 0)
	//		printf("%d", 10 / v);
	//	else
	//		printf("%d", 10 / v + 1);
	//	return 0;
	//}
    int b=10000/v;
	printf("%d", b+1);

    return 0;
}