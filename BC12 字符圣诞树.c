#include <stdio.h>

int main() 
{
    char a = 0;
    scanf("%c",&a);
    printf("    %c\n",a);
    printf("   %c %c\n",a,a);
    printf("  %c %c %c\n",a,a,a);
    printf(" %c %c %c %c\n",a,a,a,a);
    printf("%c %c %c %c %c",a,a,a,a,a);
    
    return 0;
}