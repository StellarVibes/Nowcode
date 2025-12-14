#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char* p;
	p= (char*)malloc(100);
	int a = 0;
	if (p == NULL)
	{
		return 1;
	}
	for (int i = 0; i < 100; i++)
	{
		p[i] = '\0';
	}
	scanf("%[^\n]s", p);
	for (int i = 0; i < 100; i++)
	{
		if (p[i] != '\0')
		{
			a++;
		}
	}
	printf("%d", a);
	free(p);
	p = NULL;

	return 0;
}