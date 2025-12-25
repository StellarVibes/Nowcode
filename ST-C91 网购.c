#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float price = 0;
	int month = 0;
	int date = 0;
	int i = 0;
	scanf("%f %d %d %d", &price, &month, &date, &i);
	if (i == 1)
	{
		if (month == 11 && date == 11)
		{
			if (price * 0.7 - 50 < 0)
				printf("0.00");
			else
				printf("%.2f", price * 0.7 - 50);
		}
		else
		{
			if (price * 0.8 - 50 < 0)
				printf("0.00");
			else
				printf("%.2f", price * 0.8 - 50);
		}
	}
	else 
	{
		if (month == 11 && date == 11)
			printf("%.2f", price * 0.7);
		else
			printf("%.2f", price * 0.8);
	}
    
	return 0;
}