#define _CRT_SECURE_NO_WARNINGS 1
 #include <stdio.h>
 
int main()
 {
	int a = 0;
	while ((scanf("%d", &a)) != -1)
	{
		for (int n = 0; n < a; n++)
		{
			printf("*");
		}
		printf("\n");
	}
    
    return 0;
}