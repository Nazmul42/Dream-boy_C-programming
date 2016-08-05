#include <stdio.h>
#include <string.h>

char arr[100];

int main()
{
     int lo=0,hi, flag=0;
     gets(arr);
     hi=strlen(arr)-1;

     while(lo<=hi){
       if(arr[lo]!=arr[hi])flag=1;
       lo++;
       hi--;


     }
      if(flag==0) puts("Palindrome");
      if(flag==1) puts("Not Palindrome");



}



