#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	float i = 0;
	float sum = 0;
	float max = 0;
	float min = 10000;
	scanf("%d", &n);
	for (int f = 0; f < n; f = f + 1)
	{
		scanf("%f", &i);
		if (max < i)
			max = i;
		if (min > i)
			min = i;
            sum = sum + i;
	}
	printf("%.2f %.2f %.2f", max, min, sum / n);
    
	return 0;
}