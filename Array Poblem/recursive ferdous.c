#include <stdio.h>
int call (int a)
{
printf("%d,a");
if (a==0) return 0;
call (a-1);

}

int main()
{
int a=5;
call(a);
}
