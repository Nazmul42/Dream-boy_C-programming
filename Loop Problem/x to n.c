#include <stdio.h>

int main()
{
   int X,N,i, sum=1 ;
   scanf("%d%d", &X,&N);

   for(i=1; i<=N; i++ ){

   sum=sum*X;
   }
   printf("%d\n", sum );
}
