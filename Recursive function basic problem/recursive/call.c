#include<stdio.h>
#include<conio.h>

void Recursive_Call(int)

int main()
{

    Recursive_Call(1);

     return 0;
}

void Recursive_Call(int x)
{
  if(x==0)
  return;
  printf("%d\n", x);
  Recursive_Call(x-1);
  printf("Call End\n\n");

}
