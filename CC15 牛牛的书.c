#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct fuction
{
	char arr[100];
	int a;
	int** t;
};

int main()
{

	int n = 0;
	scanf("%d", &n);
	struct fuction f[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d", &f[i].arr, &f[i].a);
		f[i].t = &f[i].arr;
	}
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (f[j].a > f[j + 1].a)
			{
				int tmp = f[j].a;
				f[j].a = f[j + 1].a;
				f[j + 1].a = tmp;
				int* ret = f[j].t;
				f[j].t = f[j + 1].t;
				f[j + 1].t = ret;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", f[i].t);
	}
    
	return 0;
}