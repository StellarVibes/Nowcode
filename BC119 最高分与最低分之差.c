#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,a = 0,max = 0,min = 100;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	printf("%d", max - min);

	return 0;
}