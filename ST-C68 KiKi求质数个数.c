#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int count = 0;
	int n = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (n = 2; n < i; n++)
		{
			if (i % n == 0)
			{
                count ++;
				break;
            }
	}
	printf("%d", 900-count);

	return 0;
}