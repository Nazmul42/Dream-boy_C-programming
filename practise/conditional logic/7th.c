#include <stdio.h>

int main ()
{
    char ch= 'y';
    if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'){
        printf("%c is vowel\n", ch);
    }
    else {
        printf("%c is consonant\n", ch);
    }
}
