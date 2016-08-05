#include <stdio.h>

void call(int *b, int *a)
{
int t;
t=*b; *b=*a; *a=t;
}
int main()
{
int a=12, b=90;
call(&a,&b);
printf("a=%d b=%d\n", a,b);
}
