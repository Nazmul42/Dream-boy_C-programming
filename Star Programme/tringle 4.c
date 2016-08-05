#include <stdio.h>

int main()
{
   int i,n,k,space,star;
   printf("Enter the star\n");
   scanf("%d", &n);
    space=0;
    star=n;

   for(i=1; i<=n; i++){
       for(k=1;k<=star; k++){printf("*");}

      for(k=1; k<=space; k++){
      printf(" ");
      }
      space++;
      star-=1;

      printf("\n");
   }


}
