#include <stdio.h>

int main()
{
    int ***a , p = 2 , **q , *r ;
    r=&p;
    q=&r;
    a=&q;
    printf("%d",***a);
    return 0;
}
