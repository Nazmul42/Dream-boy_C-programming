#include <stdio.h>

int main()
{
  int i,j,n;
  scanf("%d", &n);
  for(i=1; i<=n;i++){
    for(j=1; j<=n; j++){

    if(j==n || j==1 || i==1 || i==n)
       printf("1");
       else
       printf(" ");

    }
    printf("\n");
  }
}
