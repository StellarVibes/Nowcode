#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

long long function(int n)
{
	long long a = 1;
	while (n)
	{
		a *= 10;
		n--;
	}
	return a;
}

int main()
{
	long long t = 0,count = 0,a = 0,c = 0;
	int flage = 1;
	int arr[20] = { 0 };
	scanf("%lld", &t);
	a = t;
	while (a)
	{
		a /= 10;
		count++;
	}
	long long b = 2 * count - 1;
	for (long long i = count; i >=0; i--)
	{
		arr[i] = t % 10;
		t /= 10;
	}
	for (long long i = 1; i <count; i++)
	{
		arr[b] = arr[i];
		b--;
	}
	long long n = 2 * count - 1;
	for (long long i = 1; i <= 2 * count - 1; i++)
	{
		c += function(n-1) * arr[i];
		n--;
	}
	for (long long i = 2; i < sqrt(c);i++)
	{
		if (c % i == 0)
		{
			flage = 0;
			break;
		}
	}
	if (flage)
	{
		printf("prime");
	}
	else
	{
		printf("noprime");
	}
    
	return 0;
}