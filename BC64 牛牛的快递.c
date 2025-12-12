#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float a = 0;
	char b = 0;
	scanf("%f %c", &a, &b);
	if (b=='y')
	{
		if (a <= 1)
		{
			printf("25\n");
		}
		if (a > 1)
		{
			if (a - (int)a == 0)
				printf("%.0f\n", 25 + (a - 1) / 1);
			if (a - (int)a != 0)
				printf("%.0f\n", 25 + a / 1-(a - (int)a));
		}
	}
	else
	{
		if (a <= 1)
		{
			printf("20\n");
		}
		if (a > 1)
		{
			if (a - (int)a == 0)
				printf("%.0f\n", 20 + (a - 1) / 1);
			if (a - (int)a != 0)
				printf("%.0f\n", 20 + a / 1-(a - (int)a));
		}
	}
    
	return 0;
}