#include <stdio.h>

int main() {
    char arr[10000];
    long i = 0;
    gets(arr);
    while(arr[i++])
    {
        ;
    }
    for(long a = i-2;a>=0;a--)
    {
        printf("%c",arr[a]);
    }
    
    return 0;
}