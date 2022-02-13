/*
Author :- Rajeshwari
purpose :- solving homework problem
Date :- 23/12/21 Thursday.
Date of modification :-
                         problem statement
write a program to accept array elements and also accept element to search for write the logic to print
how many times specified element is present in that array 

useing your knowledge,flag
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int m[10],num,i,flag=0;
    printf("enter element for an array\n");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("enter a digit to search in array\n");
    scanf("%d",&num);
    for(i=0;i<=9;i++)
    {
        if(m[i]==num)
        {
            flag++;
        }
    }
    printf("%d is present in this array %d times",num,flag);
}