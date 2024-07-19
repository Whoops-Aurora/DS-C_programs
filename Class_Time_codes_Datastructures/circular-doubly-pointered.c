#include<stdio.h>
#include<stdlib.h>
typedef struct army
{
    int height;
    struct army *next,*prev;
} NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
void create(NODE **x,int check);
void display(NODE *x);
/*void delete_front(NODE **x);
void delete_rear(NODE **x);     */
main()
{
    NODE *head=NULL;
    int ch;
    while(1)
    {
        printf("\n\tMenu\n1)Create\n2)Display\n3)Insert front\n4)Insert rear\n5)delete front\n6)delete rear\nAny other Key to exit\nchoice:");
        scanf("%d",&ch);
        switch(ch)
            {
            case 1:
                create(&head,-10);
                break;
            case 2:
                display(head);
                break;
            case 3:
                create(&head,1);
                break;
            case 4:
                create(&head,10);
                break;
            /*case 5:
                delete_front(&head);
                break;
            case 6:
                delete_rear(&head);
                break;                  */
            default:
                printf("\nThank You!!\nExiting...\n\n");
                return 0;
            }
    }
}
void create(NODE **x,int check)
{

    NODE *p,*temp;
    int ch;
    if(check==-10 || check==10)//to create new or to insert rear shortcut
    {
        if(*x==NULL)
        {
            p=newnode();
            printf("Enter First integer:");
            scanf("%d",&p->height);
            *x=p;
            p->next=p;
            p->prev=p;
        }
        p=*x;
        while(p->next!=*x)
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
                p->next=*x;
                (*x)->prev=p;
                break;
            }
        }while(1);
    }
    else if(check==1)
    {
        if(*x==NULL)
        {
            p=newnode();
            printf("Enter First integer:");
            scanf("%d",&p->height);
            *x=p;
            p->next=NULL;//it should be p->next=p
            p->prev=NULL;//it should be p->next=p
        }
        else
        {
            p=newnode();
            printf("Enter front integer:");
            scanf("%d",&p->height);
            p->prev=(*x)->prev;
            p->next=(*x);
            p->prev->next=p;
            (*x)->prev=p;
            (*x)=p;
        }
    }
}
void display(NODE *x)
{
    if(x==NULL)
       {
           printf("Empty list...\n");
           return 0;
       }
    NODE *head=NULL;
    head=x;
    printf("\nDisplaying...\n");
    while(x->next!=head)
    {
        printf(" %-4d",x->height);
        x=x->next;
    }
    printf(" %-4d",x->height);
}
