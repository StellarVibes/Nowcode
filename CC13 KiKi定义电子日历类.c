#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

typedef struct Date
{
	int year;
	int month;
	int day;
}Dt;


int main()
{
    struct Date tt = { 0 };
	scanf("%d%d%d", &tt.year,&tt.month ,&tt.day);
	printf("%d/%d/%d", tt.day, tt.month, tt.year);
    
	return 0;
}