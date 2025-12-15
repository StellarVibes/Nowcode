#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void sort(int* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
}

int main() 
{
    int n = 0;
    int arr[100] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(&arr[0], n);
    
    return 0;
}