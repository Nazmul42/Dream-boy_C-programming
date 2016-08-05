#include <stdio.h>

int main()
{
   int row,col,n;
   printf("Enter the row num\n");
   scanf("%d", &n);
   for(row=0; row<=n; row++){

      //for(space=1; space<=n-row; space++){
        //printf(" ");}

      for(col=1; col<=n; col++){
        printf("*");
      }

        printf("\n");
   }
}
