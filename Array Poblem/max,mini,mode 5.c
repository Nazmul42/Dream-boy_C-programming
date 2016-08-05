#include <stdio.h>
#include <string.h>

int arr[100];
int main()
{
    int n,i,j,t,a;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<n; i++){
        for(j=0;j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("MAXIMUM: %d\n", arr[n-1]);
    for(i=1; i<n; i++){
        for(j=0;j<n-i; j++){
            if(arr[j]<arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("MINIMUM: %d\n", arr[n-1]);
    printf("MEDIAN: %d\n", arr[n-1/2]);
    int s = 0, ans = -1;
    for(i=0; i<n; i++){
        int temp=0;
        for(j=i; j<n; j++){
            if(arr[i] == arr[j]);
            temp++;
        }
        if(temp>s){
            temp=s;
            ans=arr[i];
        }
    }
    printf("MODE: %d\n", ans);

}
