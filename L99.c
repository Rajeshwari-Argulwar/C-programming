/*
Author :- Rajeshwari
purpose :- solving problem on call by value and call by refrence
Date :- 16/12/21,  .
Date of modification :- 20/12/21 , Sunday .
                         problem statement
Define a function that externally fills addition & substraction of two integer value use call by refrence

*/
#include<stdio.h>
void main()
{
    int n1,n2;
    int ad,sub;
   // p1=&ad;
    //p2=&sub;
    printf("Enter 2 values \n");
    scanf("%d%d",&n1,&n2);
    operations(n1,n2,&ad,&sub);
    printf("Addition is %d",ad);
    printf("\nSubstraction is %d",sub);
}
void operations(int x,int y,int *p1, int *p2)
{
    *p1=x+y;
    *p2=x-y;
}