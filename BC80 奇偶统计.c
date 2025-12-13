#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	if (N % 2 == 0)
		printf("%d %d", N / 2, N / 2);
	if (N%2==1)
		printf("%d %d", N / 2+1, N / 2);
        
	return 0;
}