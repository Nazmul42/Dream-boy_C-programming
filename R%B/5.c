#include <stdio.h>

long long digitSum(long long n)
{
    if(n==0) return 0 ;
    return (n%10)+digitSum(n/10);
}

int main()
{
    long long n = 102584058 , f ;
    f = digitSum(n);
    printf("%lld\n",f);
    return 0;
}
