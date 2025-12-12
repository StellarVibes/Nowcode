#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int year = 0,month = 0,day = 0,year1 = 0,month1 = 0,day1 = 0,total = 0,total1 = 0;
	scanf("%d %d %d\n", &year, &month, &day);
	scanf("%d %d %d\n", &year1, &month1, &day1);
	total = year * 365 + month * 30 + day;
	total1 = year1 * 365 + month1 * 30 + day1;
	if (total <= total1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
    
	return 0;
}