/*
Author :- Rajeshwari
purpose :- solving  problem
Date :- 23/12/21 Thursday.
Date of modification :-
                         problem statement
write a program to accept elements of 2 arrays and add them into 3rd array

useing your knowledge
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10],b[10],c[10];
    printf("Enter elements of first array");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("enter elaements of secound array");
    for(i=0;i<=9;i++)
        scanf("%d",&b[i]);
    for(i=0;i<=9;i++)
        c[i]=a[i]+b[i];
    printf("elements of added array");
    for(i=0;i<=9;i++)
        printf("%d\n",c[i]);
    
}