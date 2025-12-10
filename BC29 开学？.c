#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	i = a + b;
	if (i % 7 == 0)
	{
		printf("7");
	}
	else 
	{	
		printf("%d", i % 7); 
	}
    
	return 0;
}