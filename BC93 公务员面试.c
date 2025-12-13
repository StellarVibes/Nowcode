#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int arr[7] = { 0 };
    while (scanf("%d %d %d %d %d %d %d ", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != -1)
    {
        for (int i = 0; i < 6; i++)
        {
            int j = 0;
            for (j = 0; j < 6 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
        float sum = 0;
        for (int i = 1; i < 6; i++)
        {
            sum += arr[i] / 5.0;
        }
        printf("%.2f\n", sum);
    }

    return 0;
}