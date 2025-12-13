#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0,i = 0,count = 0;
    int arr[22] = { 0 };
	scanf("%d", &a);
	while (1)
	{
		if (a < 6)
		{
			printf("%d", a);
			break;
		}
		else
		{
			while (a > 5)
			{
				arr[i] = a % 6;
				a /= 6;
				i += 1;
				count += 1;
			}
			printf("%d", a);
			break;
		}
	}
	while (count)
	{
		printf("%d", arr[count - 1]);
		count--;
	}

	return 0;
}