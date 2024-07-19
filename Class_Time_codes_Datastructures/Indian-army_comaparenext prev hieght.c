#include<stdio.h>
#include<stdlib.h>
typedef struct army
{
    int height;
    struct army *next,*prev;
} NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
void create(NODE **x);
main()
{
    NODE *head=NULL;
    int count=0;
    create(&head);
    compare(head,&count);
    printf("\nTotal selected=%d",count);
}
void create(NODE **x)
{
    NODE *p,*temp;
    int ch;
    if(*x==NULL)
    {
        p=newnode();
        printf("Enter First integer:");
        scanf("%d",&p->height);
        *x=p;
        p->next=NULL;
        p->prev=NULL;
    }
    p=*x;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    do
    {
        printf("Continue(1/0)");
        scanf("%d",&ch);
        if(ch==1)
        {
            temp=p;
            p->next=newnode();
            p=p->next;
            p->prev=temp;
            printf("Enter Integer:");
            scanf("%d",&p->height);
        }
        else
        {
            p->next=NULL;
            break;
        }
    }while(1);
}
void compare(NODE *x,int *count)
{
    if(x==NULL)
    {
        printf("Empty list");
        exit(0);
    }
    while(1)
    {
        if(x->prev==NULL && x->next==NULL)//Only one node
        {
            printf("No values to compare...\n");
            if(x->height > 150)
            {
                printf("%d\n",x->height);
                //*count=*count+1;
                printf("Total selected = 1");
                exit(0);
            }
            else
            {
                printf("No members selected as person << 150\n");
                exit(0);
            }
        }
        else if(x->prev==NULL)//for first node
        {
            if(x->height > 150)
            {
                if(x->next->height > x->height)
                {
                    printf("%d\t",x->height);
                    *count=*count+1;
                }
            }
        }
        else if(x->next==NULL)//for last node
        {
            if(x->height > 150)
            {
                if(x->prev->height < x->height)
                {
                    printf("%d\t",x->height);
                    *count=*count+1;
                    return 0;
                }
            }
            else
                return 0;
        }
        else//for mid nodes
        {
            if(x->height > 150)//to filter and check only if >>150
            {
                if(x->prev->height < x->height && x->height < x->next->height)
                {
                    printf("%d\t",x->height);
                    *count=*count+1;
                }
            }
        }
        x=x->next;
    }
}
