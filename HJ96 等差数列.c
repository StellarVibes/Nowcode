#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,i = 2,a = 0;
	scanf("%d", &n);
	while (n)
	{
		a += i;
		i += 3;
		n--;
	}
	printf("%d", a);

	return 0;
}