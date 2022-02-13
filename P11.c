/*
Author :- Rajeshwari
purpose :- solving problem
Date :-07/10/21 Thuesday .
Date of modification :- 19/12/21 , Sunday .
                                  Problem statement
write a program to accept 3 sides of a triangle and print whether it is an equilateral triangle
useing nested if-else
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2,s3,a;
    printf("Enter 3 sides of a triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    a=s1+s2+s3;
    if(a==180)
    {
        if(s1==s2&&s2==s3)
        {
            printf("This is an Equilateral traingle\n");
        }
        else
        {
            if(s1==s2||s2==s3)
            {
                printf("This is an isoscelus triangle\n");
            }
            else
            {
                printf("This is a scalene triangle\n");
            }
        }
    
    }
    else
    {
    printf("This is not a triangle\n");
    }
}