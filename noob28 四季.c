#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int year = 0;
	scanf("%d", &i);
	year = i%10;
	if (year == 3 || year == 4 || year == 5)
		printf("spring");
	else if (year == 6 || year == 7 || year == 8)
		printf("summer");
	else if(year == 9 || year == 10 || year == 11)
		printf("autumn");
	else if (year == 12 || year == 1 || year == 2)
		printf("winter");
        
	return 0;
}