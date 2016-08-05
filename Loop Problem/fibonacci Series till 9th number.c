#include<stdio.h>
int main(){
    int k,r;
    int i=0,j=1,f;
    printf("Enter the number range:");
      scanf("%d", &r);
    printf("\nFIBONACCI SERIES: ");
    printf("%d %d",i,j);
    for(k=2;k<r;k++){
         f=i+j;
         i=j;
         j=f;
         printf(" %d",j);
    }
    return 0;
}

