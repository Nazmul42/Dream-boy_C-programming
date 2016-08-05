#include <stdio.h>
int call(int a)
{
   if(a==0)return;
   call(a-1);
   printf("%d\n", a);

}
int main()
{

   call(5);
   return 0;
}
