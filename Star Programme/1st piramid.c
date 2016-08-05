#include <stdio.h>

int main()
{
   int row,col,space,n;
   printf("Enter the row num\n");
   scanf("%d", &n);
   for(row=1; row<=n; row++){

      for(space=1; space<=n-space; space++){
        printf(" ");}

      for(col=1; col<=(2*row)-1; col++){
        printf("*");
      }

        printf("\n");
   }
}
