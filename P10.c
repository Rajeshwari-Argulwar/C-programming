/*
Author :- Rajeshwari
purpose :- solving problem
Date :-07/10/21 Thuesday .
Date of modification :- 19/12/21 , Sunday .
                                  Problem statement
write a program to accept marks of 5 subjects of a student is pass or fail a student is pass if he get greater than or equal to 40
marks in more than three subjects
*/
#include<stdio.h>
void main()
{
    int sb1,sb2,sb3,sb4,sb5;
    printf("Enter your marks\n");
    scanf("%d%d%d%d%d",&sb1,&sb2,&sb3,&sb4,&sb5);
    int pass_count=0;
    if(sb1>=40)
    {
        pass_count++;
    }
    if(sb2>=40)
    {
        pass_count++;
    }
    if(sb3>=40)
    {
        pass_count++;
    }
    if(sb4>=40)
    {
        pass_count++;
    }
    if(sb5>=40)
    {
        pass_count++;
    }
    if(pass_count>3)
    {
        printf("student is pass");
    }
    if(pass_count<=3)
    {
        printf("student is failed");
    }
}