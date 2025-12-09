#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int a = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i=i+1)
	{
		a = a + i;
	}
	printf("%d", a);
    
	return 0;
}