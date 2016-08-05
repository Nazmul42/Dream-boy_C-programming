#include <stdio.h>
#include <string.h>

char arr[100];
int feq[1000];
int main()
{
    int i , len , space = 0 ;
    gets(arr);

    for(i=0;arr[i]!=NULL;i++)
    {
        feq[arr[i]]++;
    }

    for(i=0;i<=150;i++)
    {
        if(feq[i]!=0)
        {
            printf("%c = %d\n",i,feq[i]);
        }
    }
}
