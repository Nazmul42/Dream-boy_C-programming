#include <stdio.h>

int main()
{
    int a = 2 , b = 3 , *p , *q ;
    p = &a ;
    q = &b ;

    printf("%d %d %d %d\n",a,b,*p,*q);
}
