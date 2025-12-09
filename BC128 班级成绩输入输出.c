#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a = 0,b = 0,c = 0,d = 0,e = 0,sum = 0;
	while (scanf("%f %f %f %f %f\n", &a, &b, &c, &d, &e) != -1)
	{
		sum = a + b + c + d + e;
		printf("%.2f %.2f %.2f %.2f %.2f %.2f\n", a, b, c, d, e, sum);
	}
    
	return 0;
}