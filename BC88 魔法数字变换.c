#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = n * 3 + 1;
		count = count + 1;
	}
	printf("%d", count);
    
	return 0;
}