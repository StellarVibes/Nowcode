#include <stdio.h>

int main() {
    int a = 1,x = 0,y = 0,count = 0;
    scanf("%d%d",&x,&y);
    for(int i = 0;i<32;i++)
    {
        if((x&(a<<i))^(y&(a<<i)))
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}