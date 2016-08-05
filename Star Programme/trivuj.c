#include <stdio.h>
int main()
{
    int i,n,k,space,star;
    printf("Enter the star\n");
    scanf("%d", &n);
    space=n-1;
    star=1;
    for(i=1; i<=n; i++){

       for(k=1; k<=space; k++){printf(" ");
       }
       for(k=1; k<=star; k++){printf("*");}
       for(k=1; k<=space; k++){printf(" ");}
       space--;
       star+=2;
       printf("\n");
    }

      space=1;
      star=2*n-3;
      for(i=1; i<=n; i++){

       for(k=1; k<=space; k++){printf(" ");}
       for(k=1; k<=star; k++){printf("*");}
       for(k=1; k<=space; k++){printf(" ");}

        space++;
        star-=2;

    printf("\n");
    }



}
