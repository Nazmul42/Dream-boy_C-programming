#include <stdio.h>


long int find_factorial(long int n)
{
   if(n<=1) return 1;
   else
   return (n*find_factorial(n-1));
}

int main()
{
  long int x,p;
  scanf("%ld", &p);

  x = find_factorial(p);
  printf("\nFactorial is: %ld", x);

}
