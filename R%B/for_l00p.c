#include <stdio.h>

int main()
{
    int i , sum = 0;
    for(i=1;i<=10;i=i+1)
    {
        sum = sum + i ;
        printf("%d :: %d\n",i,sum);
    }

}
