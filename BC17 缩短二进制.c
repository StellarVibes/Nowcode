#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1234;
	printf("%#0o ", i);
	printf("%#0X", i);
    
	return 0;
}