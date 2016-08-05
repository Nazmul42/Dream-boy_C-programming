#include <stdio.h>

void call(int *a)
{
    *a = 0 ;
}

int main()
{
    int a = 12586 ;
    call(&a);
    printf("%d\n",a);
    return 0;
}
