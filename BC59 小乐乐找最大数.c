#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0,b = 0,c = 0,d = 0,tmp = 0;
	scanf("%d%d%d%d", & a, &b, &c, &d);
	if (b > a)
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	if (c > a)
	{
		tmp = c;
		c = a;
		a = tmp;
	}
	if (d > a)
	{
		tmp = d;
		d = a;
		a = tmp;
	}
    printf("%d", a);

	return 0;
}