#include<stdio.h>
#include<string.h>

int main()

{
    char a[100];
    char b[100];
    gets (a);
    int l,i,j;
    l=strlen(a);
    for (i=0,j=l-1;a[i]!='\0';i++)
    {
        b[i]=a[j];
        j--;
    }
    b[i]='\0';
    if (strcmp(a,b)==0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}
