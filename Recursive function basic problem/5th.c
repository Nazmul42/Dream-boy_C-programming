 #include <stdio.h>

 int recure(int a)
 {
   if(a/10==0) return a;
   return (a%10)+recure(a/10);
 }
 int main()
 {
 int n=recure(223);
 printf("%d\n", n);
 return 0;

 }
