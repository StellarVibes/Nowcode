#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,m = 0,r = 0,o = 0;
	int t[3] = { 0 };
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		r = 2;
		o+= arr[i];
		m = o;
		while (m)
		{
			t[r] = m % 60;
			r--;
			m /= 60;
		}
		for (int i = 0; i < 3; i++)
		{
			printf("%d ", t[i]);
		}
		printf("\n");
	}
    
	return 0;
}
