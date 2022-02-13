#include <stdio.h>
int main()
{
    /* code */
    int n;
    printf("enter any number");  
    scanf("%d",&n);

    if(n%9==0)
    {
        printf("it is a multiple of 9");
    }
    else{
        printf("it is not a multiple of 9");
    }
    return 0;
}

