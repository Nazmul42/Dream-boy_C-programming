#include <stdio.h>

int square(int a)
{
    int t = 0 ;
    t = a*a ;
    return t ;
}

int main()
{
    int a = 10 , b = 20 , c = 30 , t ;
    t = square(a) ;
    printf("%d\n",t);
}
