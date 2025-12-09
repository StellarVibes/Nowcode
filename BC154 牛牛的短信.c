#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int a = 0;
	float sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < 60)
		{
			sum = 0.1 + sum;
		}
		else
		{
			sum = 0.2 + sum;
		}
	}
	printf("%.1f", sum);

	return 0;
}