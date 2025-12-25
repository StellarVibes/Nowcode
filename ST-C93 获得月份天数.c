#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	while (scanf("%d %d", &year, &month)!=-1)
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		if (month == 2)
			printf("29\n");
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("31\n");
		else
			printf("30\n");
	}
	else
	{
		if (month == 2)
			printf("28\n");
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("31\n");
		else
			printf("30\n");
	}
    
	return 0;
}