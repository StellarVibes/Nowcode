int reverse(int x ) 
{
    long a = abs(x);
    //printf("%d",a);
    if(a>1000000002)
    {
        if(a%10!=0)
        {
             return 0;
        }
    }
    int num = 0;
    while(a)
    {
        num+=a%10;
        num*=10;
        a/=10;
    }
    num/=10;
    if(x<0)
    {
        num*=-1;
    }
    return num;
}