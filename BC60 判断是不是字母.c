#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char i = 0;
	while (scanf("%c", &i) != -1)
	{
        getchar();
		if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z')
			printf("%c is an alphabet.\n", i);
		else 
			printf("%c is not an alphabet.\n", i);
    }
    
	return 0;
}