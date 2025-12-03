#include <stdio.h>

int main() {
    int a = 0,b = 0,num = a;
    scanf("%d",&a);
    while(num)
    {
        b+=num%10;
        b*=10;
        num/=10;
    }
    b/=10;
    printf("%d",a+b);

    return 0;
}