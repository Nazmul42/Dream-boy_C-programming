#include <stdio.h>

int main()
{
    int i , j , n , space , inter_space  ;
    scanf("%d",&n);
    space = n-1 ;
    inter_space = 0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++) printf(" ");
        printf("*");
        for(j=1;j<=inter_space;j++) printf(" ");
        if(i!=1)printf("*");
        space--;
        inter_space+=2;
        printf("\n");
    }

    space=1;
    inter_space-=4;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=space;j++) printf(" ");
        printf("*");
        for(j=1;j<=inter_space;j++) printf(" ");
        if(i!=n-1)printf("*");
        space++;
        inter_space-=2;
        printf("\n");
    }
}
