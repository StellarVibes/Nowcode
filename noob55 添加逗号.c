#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[20] = { 0 };
	int n = 0,i = 1,count = 0;
	scanf("%d", &n);
	while(n)
	{
		arr[i] = n % 10;
		n /= 10;
		i++;
		count++;
	}
	for (int i = count; i >0; i--)
	{
		switch (count % 3)
		{
		    case 0:
			    if (i == 1)
			    {
				    printf("%d", arr[i]);
			    }
			    else if (i % 3 == 1)
			    {
				    printf("%d,", arr[i]);
			    }
			    else
			    {
			    	printf("%d", arr[i]);
			    }
			    break;
		    case 1:
		    {
		    	if (i == 1)
		    	{
		    		printf("%d", arr[i]);
		    	}
		    	else if (i % 3 == 1 || i == count)
		    	{
		    		printf("%d,", arr[i]);
		    	}
		    	else
		    	{
		    		printf("%d", arr[i]);
		    	}
			    break;
		    }
		    case 2:
		    {
		    	if (i == 1)
		    	{
		    		printf("%d", arr[i]);
		    	}
		    	else if (i % 3 == 1 || i == count - 1)
		    	{
		    		printf("%d,", arr[i]);
		    	}
		    	else
		    	{
		    		printf("%d", arr[i]);
		    	}
		    	break;
		    }
		}
	}
    
	return 0;
}