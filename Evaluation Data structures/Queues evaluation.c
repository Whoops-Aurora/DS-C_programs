#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct plants
{
    int plant;
    struct plants *next;
}NODE;

#define newnode() (NODE*)malloc(sizeof(NODE))

void insert(NODE**);
int Pplants(NODE**);
void display(NODE*);

main()
{
    int flag=1, days=0;
    NODE *head=NULL;
    insert(&head);



        days++;
        printf("Plants dead in day:%d...\n",days);
        flag = Pplants(&head);


    printf("Plants left after all dying:day:%d...\n",days);
    display(head);
}
void insert(NODE **x)
{
    NODE *p;
    int ch;

    if(*x==NULL)
    {
        printf("Creating new list...\n");
        p=newnode();
        *x=p;
    }
    else
    {
        printf("Enter the elements of Existing List :\n");
        p=*x;
        while(p->next!=NULL)
            p=p->next;

    }
    do
    {
        printf("Enter Plant pesticide content:");
        scanf("%d",&p->plant);

        printf("Continue (1/0)?\n");
        scanf("%d",&ch);
        if(ch==1)
        {
             p->next=newnode();
              p=p->next;
        }
        else
        {
             p->next=NULL;
             break;
        }
    }while(1);
}

void display(NODE *x)
{
    NODE *p;
    p=x;
    if(x==NULL)
    {
        printf("List does not exist ...\n");
        return;
    }
    printf("List :\n");
    while(p!=NULL)
    {
        printf(" %4d",p->plant);
        p=p->next;
    }
    printf("\n\n");
}
int Pplants(NODE **head)
{
    NODE *p,*cur,*h;
    int count=1,flag=0;
    if(*head==NULL)
    {
        printf("Empty list...\n");
        exit(0);
    }
    p=*head;
    while(p->next!=NULL)
    {
        if((p->next)->next!=NULL)
        {
            if( p->plant < (p->next)->plant )
            {
                flag=1;
                cur=p->next;
                p->next=(p->next)->next;
                printf("Plant deleted %d,%d\n",count,cur->plant);
                free(cur);
            }
            count++;
            p=p->next;
        }
    }
    return flag;
}
