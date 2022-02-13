#include<stdio.h>
#include<conio.h>
void main ()
{ 
    int num,i,m ;
    printf("enter any number ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        m=num*i;
        printf("%d * %d = %d\n",num,i,m);
    }
    getch();
}