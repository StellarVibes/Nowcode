#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char i = 0;
	scanf("%c", &i);
	if (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z')
		printf("YES");
	else
		printf("NO");

	return 0;
}