#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 7 == 1)
		printf("Monday");
	if (a % 7 == 2)
		printf("Tuesday");
	if (a % 7 == 3)
		printf("Wednesday");
	if (a % 7 == 4)
		printf("Thursday");
	if (a % 7 == 5)
		printf("Friday");
	if (a % 7 == 6)
		printf("Saturday");
	if (a % 7 == 0)
		printf("Sunday");

	return 0;
}