//Write a program to calculate how many 5 digit numbers can be created if the following terms apply:

   // the leftmost digit is even
    //the second digit is odd
    //the third digit is a non even prime
    //the fourth and fifth are two random digits not used before in the number.

    #include<stdio.h>
    #include<conio.h>

    long int prime(long int n);

    void main()
    {

    long int a,b,c,d,e,i,rem,num,count=0;
    for(i=20000;i<=99999;i++)
    {
    rem=i%10;
    e=rem;
    num=i/10;
    rem=num%10;
    d=rem;
    num=num/10;
    rem=num%10;
    c=rem;
    num=num/10;
    rem=num%10;
    b=rem;
    num=num/10;
    a=num;
    if(a%2==0&&b%2!=0&&prime(c)&&d!=a&&d!=b&&d!=c&&e!=d&&e!=a&&e!=b&&e!=c)
    count++;

    }
    printf(" \nRESULT=%ld",count);
    getch();
    }

    long int prime (long int n)
    {       int m;
    m=2;
    while(m<=n/2)
    {
    if(n%m==0)
    break;
    ++m;
    }
    if(m>n/2&&n!=2&&n!=1&&n!=0)
    return 1;
    else
    return 0;
    }
