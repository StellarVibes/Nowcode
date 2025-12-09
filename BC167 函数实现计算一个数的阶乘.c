#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

long long function(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	else
	{
		return n * function(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	long long ret = function(n);
	printf("%lld", ret);
    
	return 0;
}