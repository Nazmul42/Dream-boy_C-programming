#include<stdio.h>
#include<string.h>
int main()

{
    char a[1000];
    char b[1000];
    printf("Enter 1st String then 2nd String\n");
    gets(a);
    gets(b);
    int i,length=0,length1=0,flag=0,j;
    length=strlen(a);
    for (i=0;i<length;i++)
    {
        flag=0;
        if (a[i]==b[i])
        {
            flag=1;
        }
        if (flag==1)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
