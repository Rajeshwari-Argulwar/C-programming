/*
Author :- Rajeshwari
purpose :- solving problem
Date :-07/10/21 Tuesday .
Date of modification :- 20/12/21 , monday .
                                  Problem statement
write a program to accept cost price and selling price of a product and selling price of a product and print whether
the shopkeeper has made profit or loss and also display the amount earned or lost 
*/
#include<stdio.h>
void main()
{
    float cp,sp,p,d;
    printf("Enter cost price :-");
    scanf("%f",&cp);
    printf("Enter selling Price :-");
    scanf("%f",&sp);
    if(cp<sp)
    {
        p=sp-cp;
        printf("profit:-%f",p);
    }
    else if(cp>sp)
    {
        d=cp-sp;
        printf("loss %f",d);
    }
    else
    {
        printf("Zero profit");
    }

}