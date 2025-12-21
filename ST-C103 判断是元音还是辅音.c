#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char i = 0;
	while (scanf("%c", &i) != -1)
	{
        getchar();
		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
		{
			printf("Vowel\n");
		}
		else
		{
			printf("Consonant\n");
		}
	}
    
	return 0;
}