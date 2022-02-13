/*
Author :- Rajeshwari
purpose :- solving problem
Date :-06/10/21 wednesday .
Date of modification :- 19/12/21 , Sunday .
                                  Problem statement
write a program to accept a number from user and print whether it is +,- or 0
useing multiple if
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d is zero");
    }
    else
    {
        if(n>0)
        {
            printf("%d is positive",n);
        }
        else
        {
            printf("%d is negative",n);
        }
    }
}