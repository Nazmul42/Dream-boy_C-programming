#include <stdio.h>

int main(){
  int i,n,j,space,star;


  space=4;
  star=1;
  for(i=1; i<=1; i++){
      for(j=1; j<=space; j++){ printf(" ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=space; j++){ printf(" ");}

      printf("\n");
      space=4-1;



      for(j=1; j<=space; j++) {printf(" ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=space; j++)
        space=1;{printf(" ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=star; j++){printf(" ");}

      printf("\n");


       space=3-1;

      for(j=1; j<=space; j++) {printf(" ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=space; j++)
        space=1;{printf("   ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=star; j++){printf(" ");}

      printf("\n");

       space=2-1;

      for(j=1; j<=space; j++) {printf(" ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=space; j++)
       space=1; {printf("     ");}
      for(j=1; j<=star; j++){printf("*");}
      for(j=1; j<=star; j++){printf(" ");}

      printf("\n");

      space=0;
      star=9;

      for(j=1; j<=star; j++){printf("*");}
      printf("\n");
  }
}
