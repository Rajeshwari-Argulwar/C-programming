#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<windows.h>
void insert()
{
    struct node *temp,*r,*s,*info,*start;
    {
    int data,info,temp;
    temp=(struct node *)malloc(sizeof(struct node));
    };
    printf("\n Enter new data");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;

    if(start ==NULL)
    {
        start==temp;
    }
    else
    {
        printf("\n Enter data after which you want to put new data");
        scanf("%d",&info);
        r=start;
        while(r->data!=info)
        r=r->next;

        if(r->next==NULL)
        {
            r->next=temp;
            temp->prev=r;
            temp->next=NULL;
        }
        else
        {
            s=r->next;
            r->next=temp;
            temp->prev=r;
            temp->next=s;
            s->prev=temp;
        }
    }
}
