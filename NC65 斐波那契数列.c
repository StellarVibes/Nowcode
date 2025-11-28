int fac(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    return fac(n-1)+fac(n-2);
}

int Fibonacci(int n )
{
    return fac(n);
}