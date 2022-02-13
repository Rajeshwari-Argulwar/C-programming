#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,l=0,num;
    printf("enter 20 numbers");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&num);
        
        if(num>l)
        {
            l=num;
        }
        if(num==l)
        {
            l=num;
        }
        

    }
    printf("largest number is %d",l);
   getch(); 
}