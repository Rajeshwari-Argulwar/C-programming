/*
Author :- Rajeshwari
purpose :- solving problem
Date :- 29/09/21 , Wednesday .
Date of modification :- 19/12/21 , Sunday .
                                 Problem statement

write a program to accept basic salary of an employee and print gross salary by adding 40%(TA) Travelling Allowence, 
25% Dearness Allowence(DA), 20% House Rent Allowence

*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int salary,a,b,c,t;
    printf("Enter Your Salary Amount:-\n");
    scanf("%d",&salary);
    a=(salary*40)/100;
    b=(salary*25)/100;
    c=(salary*20)/100;
    t= a+b+c+salary;
    printf("Travelling allowence is 40 persent that is equal to %d\n",a);
    printf("Dearness allowence is 25 persent that is equal to %d\n",b);
    printf("House Rent allowence is 20 persent that is equal to %d\n",c);
    printf("Your Total salary is %d",t);

}

