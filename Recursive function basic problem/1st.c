#include <stdio.h>
int call(int a)
{
   if(a==0)return;
   printf("%d", a);

}
int main()
{

   call(5);
   return 0;
}
