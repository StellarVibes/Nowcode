#include<stdlib.h>

int* printNumbers(int n, int* returnSize ) 
{
	int i = n;
	*returnSize = pow(10,n)-1;
	int *arr = (int *)malloc(sizeof(int)*(*returnSize));
	while(i)
	{
		n=n*10;
		i--;
	}
	for(int i = 0;i<*returnSize;i++)
	{
		arr[i]=i+1;
	}
    
	return arr;
}