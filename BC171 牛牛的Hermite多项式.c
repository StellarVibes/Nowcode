#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int function(int n, int x)
{
	if (n <=0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 2 * n;
	}
	else
	{
		return 2*x*function(n-1,x)-2*(n-1)*function(n-2,x);
	}
}

int main()
{
	int n = 0;
	int x = 0;
	scanf("%d%d", &n, &x);
	int ret = function(n, x);
	printf("%d", ret);
    
	return 0;
}