#include <stdio.h>

int main()

{
    int A[10][10];
    int B[10][10];
    int C[100][10];
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            C[i][j]=A[i][j]*B[i][j];
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\n",C[i][j]);
        }
    }
    return 0;
}
