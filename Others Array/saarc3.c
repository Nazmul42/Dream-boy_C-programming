#include <stdio.h>

int main()
{
   char saarc[7][100]={"Bangladesh", "Pakistan", "Srilanka", "India", "Nepal", "Maldives", "Bhutan"};
   int row, col, name_length;
   for(row=0; row<7; row++){
       name_length=strlen(saarc[row]);
       for(col=0; col<name_length; col++){

      printf("(%d, %d) = %c ", row, col, saarc[row][col]);
      }
      printf("\n");
   }
   return 0;

}