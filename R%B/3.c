#include <stdio.h>

int fibonacci(int n)
{
    if(n==1) return 0 ;
    if(n==2) return 1 ;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n = 13 , f ;
    f = fibonacci(n);
    printf("%d\n",f);
    return 0;
}
