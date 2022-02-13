/*
Author :- Rajeshwari
purpose :- solving problem
Date :-07/10/21 Tuesday .
Date of modification :- 20/12/21 , monday .
                                  Problem statement
write a program to accept 3 sides of a triangle and print whether it is an equilateral triangle

using multiple if
*/
#include<stdio.h>
void main()
{
    int s1,s2,s3,eq_count=0,s;
    printf("Enter sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    s=s1+s2+s3;
if(s==180)
{    
    if(s1==s2)
    {
        eq_count++;
    }
    if(s3==s2)
    {
        eq_count++;
    }
    if(eq_count==2)
    {
        printf("It is equilateral");
    }
    if(eq_count!=2)
    {
        printf("Is is not a equilateral");
    }
}
else
{
    printf("Is is not a triangle");
}
    
}
