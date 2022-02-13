#include<stdio.h>
#include<conio.h>

int searchdigit(int num,int dig)
{
    int r=0;
    r= num%10;
    while(num>0)
    {
        if(r==dig)
        {
            return 1;
        }
        num=num/10;
    }      
}

void main()
{
    int i,j,k;


    printf("enter a number \n");
    scanf("%d",&i);
    printf("enter a digit you want to search in it \n");
    scanf("%d",&j);
    int search = searchdigit(i,j);
    printf("%d is present in this number :- ",j);

}