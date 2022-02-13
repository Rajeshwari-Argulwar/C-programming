/*
Author :- Rajeshwari
purpose :- solving problem
Date :-07/10/21 Tuesday .
Date of modification :- 20/12/21 , monday .
                                  Problem statement
write a program to accept total bill amount from user and give 15% Discount if bill amount is more than 1000 rupees otherwise no discount
useing if-else
*/
#include<stdio.h>
void main ()
{
    int tba,da,bad;
    printf("Entertotal bill amount  ");
    scanf("%d",&tba);
    if(tba>1000)
    {
        printf("\nyou will get 15 persent discount");
        da=(15*tba)/100;
        printf("\ndiscount amount :-%d",da);
        bad=tba-da;
        printf("\nfinal bill amount :- %d",bad);
    }
    else
    {
        printf("\nNo Discount");
        
    }
   
}