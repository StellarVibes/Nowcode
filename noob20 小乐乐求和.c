#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	long int v = 0;
	long int n = 0;
	scanf("%ld", &v);
	for (int i = 0; i <= v; i = i + 1)
	{
		n = n+i;
	}
	printf("%ld", n);
    
	return 0;
}