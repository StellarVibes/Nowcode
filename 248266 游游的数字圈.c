#include <stdio.h>

int main() {
    char str[100001] = {'\0'};
    scanf("%s",str);
    long long count = 0;
    long long i = 0;
    while(str[i]!='\0')
    {
        if(str[i]=='0'||str[i]=='6'||str[i]=='9')
        {
            count++;
        }
        if(str[i]=='8')
        {
            count+=2;
        }
        i++;
    }
    printf("%lld",count);
    
    return 0;
}