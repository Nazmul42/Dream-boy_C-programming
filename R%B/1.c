#include <stdio.h>

int main()
{
    int **p , *q ,  a ;
    p = &q ;
    q = &a ;
    a=10;
    printf("%d\t%d\t%d",&a,*p,**p);
    return 0;
}
