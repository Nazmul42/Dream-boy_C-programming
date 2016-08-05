#include <stdio.h>

 int GCD(int a, int b)
{
   int mn=a;
  if(b<mn)mn=b;
   for(;;mn--){

     if(a%mn==0 && b%mn==0)return mn;
   }

}
int LCM(int a,int b){
  int ans;
  ans=a*b;
  ans=ans/GCD(a,b);
  return ans;

}
int main()
{
    int a=10, b=25,g,l;
    g=GCD(a,b);
    l=LCM(a,b);

    printf("%d %d", g,l);
}
