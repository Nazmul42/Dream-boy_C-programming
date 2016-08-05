#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=i; j<=n; j++)
        {
            if(i==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=i; j<n; j++)
        {
            if(i==1 || j==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
