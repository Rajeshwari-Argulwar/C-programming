#include<stdio.h>
#include<conio.h>
void main()
{
    float i,m,n,f,add,d;
    printf("enter a number");
    scanf("%f",&n);
    i=1,m=1,f=1,add=0;
    do
    {
        m=m*n;
        f=f*i;
        d=m/f;
        
        i++;
    } while (i<=n);
    add=add+d;
        printf("%f",add);
}