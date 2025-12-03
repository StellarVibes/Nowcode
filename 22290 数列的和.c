#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	double n = 0.0;
	long long m = 0;
	while (scanf("%lf %lld", &n, &m) != -1)
	{
		double q = n;
		for (long long i = 1; i < m; i++)
		{
			q += sqrt(n);
			n = sqrt(n);
		}
		printf("%.2f\n", q);
	}

	return 0;
}