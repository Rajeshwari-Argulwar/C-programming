/*
Author :- Rajeshwari
purpose :- solving problem
Date :-06/10/21 wednesday .
Date of modification :- 19/12/21 , Sunday .
                                 Problem statement
write a program to accept age of a person and print whether he is eligible for driving licence or not. 
a person is eligible if age is greater than 17(<=18)
*/
#include <stdio.h>
int main()
{
    /* by multiple if */
    int age;
    printf("Enter your age");  
    scanf("%d",&age);

    if(age>=18)
    {
        printf("you are eligible to apply");
    }
    if (age<=17)
    {
        printf("you are not eligible to apply");
    }
    return 0;
}