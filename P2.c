/*
Author :- Rajeshwari
purpose :- solving problem
Date :- 29/09/21 , Wednesday .
Date of modification :- 19/12/21 , Sunday .
                         problem statement

 Write a program to accept a four digit number from user and print its reverse
 
 */
#include<stdio.h>
void main()
{
    int num,a,b,c,rev;
    printf("Enter a four digit number:-");
    scanf("%d",&num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;

    rev=(a*1000)+(b*100)+(c*10)+num;
    printf("Reverse is %d",rev);
}