#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int N = 0,sum = 0,n = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &n);
		sum = sum + n;
	}
	printf("%d", sum);

	return 0;
}