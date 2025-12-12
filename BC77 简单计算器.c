#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double a = 0.0,b = 0.0,num = 0.0;
	double arr[3] = { 0 };
	char arr1[1] = { '0' };
	scanf("%lf%c%lf", &arr[0], &arr1[0], &arr[2]);
	a = arr[0];
	b = arr[2];
	if (arr1[0] == '+')
	{
		num = a + b;
		printf("%.4f+%.4f=%.4f",a,b,num);
	}
	else if (arr1[0] == '-')
	{
		num = a - b;
		printf("%.4f-%.4f=%.4f", a, b, num);
	}
	else if (arr1[0] == '/'&&b==0)
	{
		printf("Wrong!Division by zero!");
	}
	else if (arr1[0] == '/')
	{
		num = a / b;
		printf("%.4f/%.4f=%.4f", a, b, num);
	}
	else if (arr1[0] == '*')
	{
		num = a * b;
		printf("%.4f*%.4f=%.4f", a, b, num);
	}
	else
	{
		printf("Invalid operation!");
	}
    
	return 0;
}
