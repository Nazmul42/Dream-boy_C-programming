#include<stdio.h>

int main()

{
    int arr[100];
    int arr1[100];
    int arr2[100];
    int a,i,j,flag;
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (i=0,j=5;i<a;i++)
    {
        arr[j]=arr1[i];
        j++;
    }

    for (i=0;i<a+a;i++)
    {
        for (j=0;j<i;j++)
        {
            flag=0;
            if (arr[i]==arr[j])
            {
                flag=1;
            }
        }
        if (flag!=1)
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}
