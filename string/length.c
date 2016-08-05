#include <stdio.h>

int string_length(char str[])
{

    int i;
    for(i=0; str[i]!='\0'; i++);

    return i;

}
