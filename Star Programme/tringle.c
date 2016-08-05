#include <stdio.h>

int main()
{
   int i,n,k;
   printf("Enter the star\n");
   scanf("%d", &n);



   for(i=1; i<=n; i++){

      for(k=1; k<=i; k++){
      printf("*");
      }
      printf("\n");
   }


}
