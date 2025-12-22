#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int flage = 0;
	char arr[10] = { 0 };
	for (int i = 1; i < 10; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == ' '||arr[i]=='\n')
		{
			i--;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] == 'K')
		{
			a = i;
			break;
		}
	}
	switch (a)
	{
	    case 1:
		    if (arr[2] == 'K' && arr[3] == 'K')
		    {
			    flage = 1;
		    }
		    if (arr[4] == 'K' && arr[7] == 'K')
		    {
		    	flage = 1;
		    }
		    if (arr[5] == 'K' && arr[9] == 'K')
		    {
		    	flage = 1;
		    }
		    break;
	    case 2:
		    if (arr[5] == 'K' && arr[8] == 'K')
		    {
		    	flage = 1;
		    }
		    break;
	    case 3:
		    if (arr[6] == 'K' && arr[9] == 'K')
		    {
		    	flage = 1;
		    }
		    if (arr[5] == 'K' && arr[7] == 'K')
		    {
		    	flage = 1;
		    }
		    break;
	    case 4:
		    if (arr[5] == 'K' && arr[6] == 'K')
		    {
		    	flage = 1;
		    }
		    break;
	    case 7:
		    if (arr[8] == 'K' && arr[9] == 'K')
		    {
		    	flage = 1;
		    }
		    break;
	}
	if (flage == 1)
	{
		printf("KiKi wins!");
	}
	else
	{
		for (int i = 1; i < 10; i++)
		{
			if (arr[i] == 'B')
			{
				b = i;
				break;
			}
		}
		switch (b)
		{
		    case 1:
		    	if (arr[2] == 'B' && arr[3] == 'B')
		    	{
				flage = 1;
		    	}
		    	if (arr[4] == 'B' && arr[7] == 'B')
		    	{
		    		flage = 1;
		    	}
		    	if (arr[5] == 'B' && arr[9] == 'B')
		    	{
		    		flage = 1;
		    	}
		    	break;
		    case 2:
		    	if (arr[5] == 'B' && arr[8] == 'B')
		    	{
		    		flage = 1;
		    	}
		    	break;
		    case 3:
		    	if (arr[6] == 'B' && arr[9] == 'B')
		    	{
		    		flage = 1;
		    	}
		    	if (arr[5] == 'B' && arr[7] == 'B')
		    	{
				flage = 1;
		    	}
		    	break;
		    case 4:
		    	if (arr[5] == 'B' && arr[6] == 'B')
		    	{
		    		flage = 1;
		    	}
		    	break;
		    case 7:
		    	if (arr[8] == 'B' && arr[9] == 'B')
		    	{
		    		flage = 1;
		    	}
		    	break;
		}
		if (flage == 1)
		{
			printf("BoBo wins!");
		}
		else
		{
			printf("No winner!");
		}
	}

	return 0;
}