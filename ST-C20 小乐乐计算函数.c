#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int max(int x, int y, int z)
{
	if (x > y && x > z)
	{
		return x;
	}
	else if (y > x && y>z)
	{
		return y;
	}
	else
	{
		return z;
	}
}

int main()
{
	int a = 0,b = 0,c = 0;
	scanf("%d%d%d", &a, &b, &c);
	int x = max(a + b, b, c);
	int y = max(a, b + c, c);
	int z = max(a, b, b + c);
	float ret = x*1.00 / (y+z);
	printf("%.2f", ret);
    
	return 0;
}