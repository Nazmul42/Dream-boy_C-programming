#include<stdio.h>

int main()

{
    int arr[1000];
    int a,b,i,flag=1,j;
    printf("Enter the number of element of array\n");
    scanf("%d",&a);
    printf("Enter the element of array\n");
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<a;i++)
    {
        flag=0;
        for (j=0;j<i;j++)
        {
            if (arr[i]==arr[j])
            {
                flag=1;
            }
        }
        if (flag==0)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
