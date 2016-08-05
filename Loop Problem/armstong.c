//Write a program to print out all Armstrong numbers between 1 and 10000.

#include<stdio.h>
int main()
{

int num,sum=0,k,rem,i;
for(i=1;i<=10000;i++)
{
num=i;
sum=0;

for(k=1;k<=i;k++)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}

if(sum==i)
printf("\n%d\n",i);
}
}
