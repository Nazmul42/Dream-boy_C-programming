#include <stdio.h>
int call(int a)
{
   if(a==0)return;

   printf("%d\n", a); call(a-1);

}
int main()
{

   call(5);
   return 0;
}
