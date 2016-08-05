///  stringe lenth ber koron


#include <stdio.h>
#include <string.h>
char arr[100];
int main()
{
int len = 0, i;
gets(arr);
for(i=0;arr[i]!=NULL;i++)
{
len++;

}
printf("%d",len);
}
