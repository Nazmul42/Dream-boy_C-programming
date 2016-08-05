#include<stdio.h>

int main()

{
    int a[1000];
    int i,b,max=0,min=0,j,temp=0,a1,a2,a3;
    float a4;
    printf("Enter the number of element of the array\n");
    scanf("%d",&b);
    printf("Enter the element of the array\n");
    for (i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=1;i<b;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    min=a[0];
    for (j=1;j<b;j++)
    {
        if (a[j]<min)
        {
            min=a[j];
        }
    }
    for (i=0;i<b-1;i++)
    {
        for (j=i+1;j<b;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
    if (b%2==0)
    {
        a1=(b/2)-1;
        a2=a1+1;
        a3=a[a1]+a[a2];
        a4=a3/2.0;
        printf("Median = %.2f\n",a4);
    }
    else
    {
        a1=(b+1)/2;
        a2=a1-1;
        a3=a[a2];
        printf("Median = %d\n",a3);
    }
    return 0;
}
