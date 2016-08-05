 #include<stdio.h>
#include<conio.h>
int main()
{
 int x,y;
 static char str[]="BANGLADESH";
 for(x=0; x<10; x++)
 {
    y=x+1;
    printf("%-100.*s\n",y,str);
 }
 for(x=8; x>=0; x--)
 {
    y=x+1;
    printf("%-10.*s\n",y,str);
 }
 getch();
 return 0;
}
