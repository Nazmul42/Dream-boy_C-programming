 #include<stdio.h>
#include<conio.h>
int main()
{
 int num,r=1,c,sp,x;
 printf("Enter loop repeat number(rows):");
 scanf("%d",&num);
 for(; num>=1; num--,r++)
 {
   for(sp=r; sp>1; sp--)
      printf(" ");
   for(c=1; c<=num; c++)
      printf("%d",c);
   for(x=num-1; x>=1; x--)
      printf("%d",x);
   printf("\n");
 }
 getch();
 return 0;
}
