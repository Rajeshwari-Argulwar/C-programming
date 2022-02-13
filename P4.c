/*
Author :- Rajeshwari
purpose :- solving problem
Date :- 05/10/21, Tuesday .
Date of modification :- 19/12/21 , Sunday .
                         problem statement
write a program to accept a number from the user and print whether it is greater than 10 or not 

useing multiple if statement
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :-");
    scanf("%d",&n);
    if(n>10)
    {
        printf("This number is greater than 10");
    }
    if(n<10)
    {
        printf("This number is less than 10 ");
    }
    if(n==10)
    {
        printf("This number is 10");
    }
}