#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
   for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
           k++;
            if(k%2==0)
            {
                printf("# ");
                
            }
            else{
                printf("* ");
               
            }
        }
        printf("\n");
    }
}
