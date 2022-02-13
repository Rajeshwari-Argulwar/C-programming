/*
Author :- Rajeshwari
purpose :- solving problem
Date :-30/09/21 Tuesday .
Date of modification :- 20/12/21 , monday .
                                 Problem statement
print ascii value of a to z
*/                                 
#include<stdio.h>
void main ()
{
    int i;
    for(i=65;i<=90;i++)
    {
        printf("%c - %d\n",i,i); // we can print ASCII value by useing "%d" and can print charecter by"%c"
    }
}