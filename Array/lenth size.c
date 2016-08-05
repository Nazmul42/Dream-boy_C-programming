///  lenth kunta boro



#include <stdio.h>
#include <string.h>
char arr[100];
char brr[100];
int main()
{
int len = 0, i,ans=0;
gets(arr);
gets (brr);

len =strlen(arr);
for (i=0;i<len;i++)
{
if (arr[i]!=brr[i]) ans=1;
{
if (arr[i]>brr[i]) ans=1;
else ans =2;
break;
}
}
printf("%d",ans);
}
