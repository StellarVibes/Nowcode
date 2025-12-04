long long fuction(int n)
{
    if(n==1)
    {
        return 1;
    }
    long long ret =( (n%1000000007)*(fuction(n-1)%1000000007))%1000000007;
    return ret;
}

int factorial(int n ) {
    return fuction(n);
}