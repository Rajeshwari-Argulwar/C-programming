#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("enter any 4 numbers");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1>n2)
    {
        if(n1>n3)
        {
            if(n1>n4)
            {
               printf("%d is largest",n4);
               
            }
            else
            {
                printf("%d is largest",n4);
            }
            
        }
        else
        {
            if(n3>n4)
            {
                printf("%d is largest",n3);
            }
            else
            {
                    printf("%d is largest",n4);
            }
        }
    }
    else
    {
        if(n2>n3)
        {
            if(n2>n4)
            {
                printf("%d is largest",n2);
            }
            else
            {
                printf("%d is largest",n4);
            }
        }
        else
        {
            if(n3>n4)
            {
                printf("%d is largest",n3);
            }
            else
            {
                printf("%d is largest",n4);
            }
        }
        
    }
    

}