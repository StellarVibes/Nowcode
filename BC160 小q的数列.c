#include<stdio.h>
#include<math.h>

long long f(long long n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return f(n/2)+f(n%2);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long ret=f(n);
        printf("%lld %0.lf\n",ret,pow(2,f(n))-1);//pow函数返回的是double类型，这里也可以强转为int
    }

    return 0;
}

