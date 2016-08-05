#include <stdio.h>

int add_all(int n)
scanf("%d", &n);
{
  if(n<=1)   /*base case*/
return(n);
else          /*recursive case*/
return(n+add_all(n-1));
}
