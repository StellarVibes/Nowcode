#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int flage = 1;
	char arr1[6] = { 0 };
	char arr2[6] = { 0 };
	char arr[6] = "admin";
	scanf("%s", arr1);
	scanf("%s", arr2);
	for (int i = 0; i < 6; i++)
	{
		if (arr1[i]!= arr[i]||arr2[i]!=arr[i])
		{
			flage = 0;
		}
	}
	if (flage == 1)
	{
		printf("Login Success!");
	}
	else if(flage==0)
	{
		printf("Login Fail!");
	}

	return 0;
}