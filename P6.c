/*
Author :- Rajeshwari
purpose :- solving problem
Date :-06/10/21 wednesday .
Date of modification :- 19/12/21 , Sunday .
                                  Problem statement
write a program to accept average marks of a student and print whether student is pass or fail
(student is pass if average is greater than equal to 40.00)

useing multiple if statement
*/
#include<stdio.h>
void main()
{
    float am;
    printf("Enter your average marks");
    scanf("%f",&am);
    if(am>=75.00)
    {
        printf(" Result = Distinction");
    }
    if(am>=40.00)
    {
        printf("Result = Pass");
    }
    if(am<=40.00)
    {
        printf("Result = Fail");
    }

}