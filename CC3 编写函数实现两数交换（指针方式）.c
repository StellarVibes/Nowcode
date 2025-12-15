#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void function(int* p, int* q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int* p = &m;
	int* q = &n;
	function(p, q);
	printf("%d %d", m, n);
    
	return 0;
}