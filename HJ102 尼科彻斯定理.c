#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,a = 0,b = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	a = n * n * n;
	for (int i = 1; i<1000000;i+=2)
	{
		int j = n;
		int o = i;
		b = 0;
		while(j)
		{
			b += o;
			o+=2;
			j--;
		}
		if (b == a)
		{
			int u = n - 1;
			printf("%d", i);
			while (u)
			{
				printf("+%d", i+2);
				i+=2;
				u--;
			}
			break;
		}
	}
    
	return 0;
}