#include <stdio.h>

int main()
{
    int i,j=0,key=0,n;
    scanf("%d", &n);
    int arr[100];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        key=arr[i];
        j=i-1;
        while(j>-1 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(j=0; j<n; j++){
        printf("%d  ", arr[j]);
    }
    return 0;
}
