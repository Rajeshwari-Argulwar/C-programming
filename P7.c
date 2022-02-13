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
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    if(b>a)
    {
        printf("%d is greater than %d",b,a);
    }
}