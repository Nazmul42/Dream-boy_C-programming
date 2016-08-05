#include <stdio.h>

int main()
{
    int a[100],i;

    for(i=0;i<=99;i++) a[i] = i*i;

    printf("%d\n",a[50]);
}
