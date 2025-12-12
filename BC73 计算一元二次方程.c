#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float a = 0,b = 0,c = 0,n = 0,result1 = 0.0,result2 = 0.0;
	while (scanf("%f %f %f", &a, &b, &c) != -1)
		if (a == 0)
		{
			printf("Not quadratic equation");
		}
		else
		{
			n = b * b - 4 * a * c;
			result1 = (-b + sqrt(n)) / (2 * a);
			result2 = (-b - sqrt(n)) / (2 * a);
			if (n == 0)
			{
				if (result1 == 0)
					printf("x1=x2=0.00\n");
				else printf("x1=x2=%.2f\n", result1);
			}
			if (n > 0)
			{
				if (result1 <= result2)
					printf("x1=%.2f;x2=%.2f", result1, result2);
				else
					printf("x1=%.2f;x2=%.2f", result2, result1);
			}
			if (n < 0)
			{
				if (sqrt(-n) / (2 * a) <= -sqrt(-n) / (2 * a))
					printf("x1=%.2f+%.2fi;x2=%.2f+%.2fi", -b / (2 * a), sqrt(-n) / (2 * a), -b / (2 * a), -sqrt(-n) / (2 * a));
				else
					printf("x1=%.2f%.2fi;x2=%.2f+%.2fi", -b / (2 * a), -sqrt(-n) / (2 * a), -b / (2 * a), sqrt(-n) / (2 * a));
			}
		}
        
	return 0;
}