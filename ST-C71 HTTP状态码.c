#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	while (scanf("%d\n", &a) != -1)
    {
        if (a == 200)
			printf("OK\n");
		else if (a == 202)
			printf("Accepted\n");
		else if (a == 400)
			printf("Bad Request\n");
		else if (a == 403)
			printf("Forbidden\n");
		else if (a == 404)
			printf("Not Found\n");
		else if (a == 500)
			printf("Internal Server Error\n");
		else
			printf("Bad Gateway\n");
    }
		
	return 0;
}