#include <stdio.h>

int main()
{
    char a;
    while(~scanf("%c",&a))
    {
        getchar();//用于吃掉多余字符 回车
        printf("%c\n",a+32);
    }
    
    return 0;
}
