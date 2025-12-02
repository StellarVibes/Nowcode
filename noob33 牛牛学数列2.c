#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double N = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i=i+1)
	{
		N = 1.0/i+N;
	}
	printf("%.6f", N);
    
	return 0;
}