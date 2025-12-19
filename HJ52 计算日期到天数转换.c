#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int function(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
    else
    {
        return 0;
    }
}

int main()
{
	int year = 0,month = 0,day = 0,a = 0,num = 0;
	scanf("%d %d %d", &year, &month, &day);
	a=function(year);
	if (a == 1)
	{
		switch (month)
		{
		    case 12:num += 30;
		    case 11:num += 31;
		    case 10:num += 30;
		    case 9:num += 31;
		    case 8:num += 31;
		    case 7:num += 30;
		    case 6:num += 31;
		    case 5:num += 30;
		    case 4:num += 31;
		    case 3:num += 29;
		    case 2:num+=31;
		}
		printf("%d", num + day);
	}
	else
	{
		switch (month)
		{
		    case 12:num += 30;
		    case 11:num += 31;
		    case 10:num += 30;
		    case 9:num += 31;
		    case 8:num += 31;
		    case 7:num += 30;
		    case 6:num += 31;
		    case 5:num += 30;
		    case 4:num += 31;
		    case 3:num += 28;
		    case 2:num += 31;
		}
		printf("%d", num + day);
	}

	return 0;
}