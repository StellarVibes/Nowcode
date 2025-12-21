#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0,b = 0,c = 0,n = 0,count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d\n", &a, &b, &c);
		if ((a + b + c) / 3 < 60)
		{
			count = count + 1;
		}
	}
	printf("%d", count);
    
	return 0;
}