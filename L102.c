/*
Author :- Rajeshwari
purpose :- solving homework problem
Date :- 23/12/21 Thursday.
Date of modification :-
                         problem statement
write a program to accept array elements from the user and reverse that array without using another array 

useing your knowledge
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,k,l;
    printf("Enter the elements of array");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    j=9;
    for(i=0;i<=4;i++)//in this loop we used  many variables just because the given problem statement says we have to make reverse of this array without creating another array 

    {
        k=a[i];
        l=a[j];

        a[i]=l;
        a[j]=k;
        j--;
    }
    printf("reversed array elements are as :-");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
}

