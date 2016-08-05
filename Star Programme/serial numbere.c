 #include<stdio.h>
#include<conio.h>
int main()
{
 int num,r,c;
 printf("Enter loop repeat number(rows): ");
 scanf("%d",&num);
 for(r=1; num>=r; r++)
 {
  for(c=1; c<=num; c++)
   printf("%d",c);
  printf("\n");
 }
 getch();
 return 0;
}
