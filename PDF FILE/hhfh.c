#include <stdio.h>

int main()
{
   int i,j,k,l,m;

   l=112;
   k=l+12;
   j=l-12;
   m=j+k;


   printf("%d%d", m%190,m/190);



   l*=(j+k+m);

   printf("\n%d", l%2);
   printf("%d", (l-2)%3);

   return 0;
}
