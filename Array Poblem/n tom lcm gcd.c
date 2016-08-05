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
int arr[1000];
int main()
{
    int i,n,g,l;
    scanf("%d",&n);

    for(i=0; i<n; i++){
       scanf("%d", &arr[i]);
    }
    g=arr[0];
    l=arr[0];
    for(i=1; i<n; i++){
      g=GCD(g, arr[i]);
      l=LCM(l, arr[i]);
    }

    printf("%d %d", g,l);
}

