#include<stdio.h>

int main()

{
    int a,n,i;
    int arr[1000];
    printf("Enter the number of element of the array\n");
    scanf("%d",&a);
    printf("Enter the element of the array\n");
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for (i=0;i<a;i++)
    {
        if (n==arr[i])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
