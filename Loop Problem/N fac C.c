#include <stdio.h>

int main()
{
   int i,n,r,d,sumN =1,sumR=1,sumd=1,res;
   scanf("%d%d", &n,&r);
  for(i=1; i<=n; i++){
       sumN=sumN*i;

       printf("%d\n", sumN);
   }

    for(i=1; i<=r; i++){
       sumR=sumR*i;

     printf("%d\n", sumR);
   }
   d=n-r;
    for(i=1; i<=d; i++){
       sumd=sumd*i;


   }
   res=sumN/(sumd*sumR);
   printf("%d\n", res);

}
