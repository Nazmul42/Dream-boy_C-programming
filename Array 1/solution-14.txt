#include<stdio.h>
#include<string.h>

int main()

{
    char a[1000];
    printf("Enter a String\n");
    gets(a);
    int i,word=0,letter=0,space=0,length=0;
    length=strlen(a);
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]==' ')
        {
            space++;
        }
    }
    printf("Letter=%d\n",length-space);
    printf("Word=%d\n",space+1);
    return 0;
}
