/*
Author :- Rajeshwari
purpose :- solving problem
Date :-28/10/21 Thursday .
Date of modification :- 19/12/21 , Sunday .
                                  Problem statement
write a program to get power of entered value upto value entered eg. 2^6=64
*/
#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,b,p;
    long int m=1;
    printf("enter base value \n");
    scanf("%d",&b);
    printf("enter power value\n");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        m=m*b;
    }
    printf("The value of %d to the power %d is =%ld",b,p,m);
    getch();
}