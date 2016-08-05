#include<stdio.h>

int main()

{
    int a,b;
    printf("Enter the position of the array and value\n");
    scanf("%d%d",&a,&b);
    int arr[100];
    arr[a]=b;
    printf("Array[%d] = %d\n",a,arr[a]);
    return 0;
}
