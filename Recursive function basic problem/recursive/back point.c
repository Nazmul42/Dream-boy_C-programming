#include <stdio.h>

void back_point(void)
{
   char ch;
   if ((ch= getchar()) !='\n')
   back_point();
   putchar ( ch );
}

int main()
{
 printf("Type a line of text: ");
 back_point();

}
