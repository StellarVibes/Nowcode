#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int flage = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int v = 0;
		scanf("%d", &v);
		flage = 1;
		for (int a = 2; a < v; a++)
		{
			if (v % a == 0)
			{
				flage = 0; 
				break;
			}
		}
		if (flage == 1)
			printf("true\n");
		else
			printf("false\n");
	}

	return 0;
}