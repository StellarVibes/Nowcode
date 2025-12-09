#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0,sum = 0,flag = 1,b = 0;
	scanf("%d%d", &n,&b);
	for (int i = n; i <= b; i++)
	{
		int a = 0;
		flag = 1;
		for (a = 2; a < i; a++)
		{
			if (i % a == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			sum += i;
		}
	}
	printf("%d", sum);
    
	return 0;
}