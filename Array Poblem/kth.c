#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int find(int ar[],int low,unsigned int high,int k);
int length(int ar[]);
int main()
{
int ar[MAX],k,ans;
register int i=0;
printf("\nPlease enter the numbers in the array");
while(i<MAX){
scanf("%d",&ar[i]);
i++;
}
printf("\nPlease enter the value of k ");
scanf("%d",&k);
ans=find(ar,0,MAX-1,k);
printf("\nThe %d smallest element in the array is %d",k,ans);
return 0;
}
int find(int ar[],int low,unsigned int high,int k)
{
int mid;
mid=(low+high)/2;
unsigned int i,j;
int p[MAX],q[MAX];
for(i=0,j=0;i<length(ar);i++){
if(ar[i]<ar[mid]){
p[j]=ar[i];
j++;
}
}
for(i=0,j=0;i<length(ar);i++){
if(ar[i]>ar[mid]){
q[j]=ar[i];
j++;
}
}
if(length(p)>=k){
find(p,0,length(p)-1,k);
}
else if(length(p)==k-1){
return (ar[mid]);
}
else{
find(q,0,length(q)-1,k-mid+1);
}
}
int length(int ar[])
{
return(sizeof(ar)/4);
}
