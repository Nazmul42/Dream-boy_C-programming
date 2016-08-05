#include<stdio.h>

int main()

{
    int arr[1000];
    int a,b,i,flag=0;
    printf("Enter the number of element of array\n");
    scanf("%d",&a);
    printf("Enter the element of array\n");
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which one you want to delete\n");
    scanf("%d",&b);
    for (i=0;i<a;i++)
    {
        if (b==arr[i])
        {
            flag=i;
        }
    }
    for (i=0;i<a;i++)
    {
        if (i!=flag)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
