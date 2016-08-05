#include<stdio.h>

void showval(int);
int main(void)
{
   int i;
   i=10;
   showval(i);

   i=20;
   showval(i);

}

void showval (int x)
{
   printf("%d ", x);

}
