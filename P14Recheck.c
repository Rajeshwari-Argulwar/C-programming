/*
Author :- Rajeshwari
purpose :- solving problem
Date :-07/10/21 Tuesday .
Date of modification :- 20/12/21 , monday .
                                  Problem statement
write a program to accept the 4 digit number from user 
and check whether that number is palindron number or not (a number is palindron if the original number and its Reverse are same)

useing multiple if
*/
#include<stdio.h>
void main()
{
    int num,a,b,c,rev,numr;
    printf("Enter a four digit number:-");
    scanf("%d",&num);

    a=num%10;
    numr=numr/10;
    b=num%10;
    numr=numr/10;
    c=numr%10;
    numr=numr/10;

    rev=(a*1000)+(b*100)+(c*10)+numr;
    if(num == rev)
    {
        printf("This is a palendron number");
    }
    if(num!= rev)
    {
        printf("Not a plindorn number");
    }
}