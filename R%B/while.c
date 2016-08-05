#include <stdio.h>

int main()
{
    long long i = 1 , result = 1  ;

    do
    {
        result = result * i;
        i=i+1;
    }while(i<=20);

    printf("20! = %lld\n",result);
}
