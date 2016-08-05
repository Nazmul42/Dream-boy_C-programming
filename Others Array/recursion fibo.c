#include <stdio.h>
int fib(int n);
int main()
   {
       int n,i=0,c;
    printf("Enter the fibonacci number: ");

   scanf("%d", &n);
  // printf("fibonacci series:%d %d ", f , s);
for (c=1;c<=n;c++)
{
    printf("%d",fib(i));
    i++;
}



   return 0;
   }




int fib(int n)
{

    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
