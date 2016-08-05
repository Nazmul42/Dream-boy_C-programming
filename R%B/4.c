#include <stdio.h>

long long factorial(long long n)
{
    if(n==0) return 1 ;
    return n*factorial(n-1);
}

int main()
{
    long long n = 10 , f ;
    f = factorial(n);
    printf("%lld\n",f);
    return 0;
}
