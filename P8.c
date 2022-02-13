/*
Author :- Rajeshwari
purpose :- solving problem
Date :-06/10/21 wednesday .
Date of modification :- 19/12/21 , Sunday .
                                  Problem statement
write a program to accept two numbers from user and print largest of them

useing multiple if
*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    if(c>0)
    {
        printf("%d is largest",a);
    }
    if(c<0)
    {
        printf("%d is largest",b);
    }
    if(c==0)
    {
        printf("both are equal");
    }
}