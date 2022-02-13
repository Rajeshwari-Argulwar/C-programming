#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j,m=1;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            m=i*j;
            printf("%d\t",m);
        }
        printf("\n");
    }
}