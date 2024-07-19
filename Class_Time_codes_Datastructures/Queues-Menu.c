#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
} NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
main()
{
    NODE *h=NULL,*p;
    int ch,age;
    while(1)
    {
        printf("enter choice\n1)Create\n2)display\nAny other number to exit...\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                creatt(&h);
                break;
            case 2:
                display(h);
                break;
            default :
                printf("Thank you...\n");
                exit(1);
        }
    }
}

//Creating a node
void creatt(NODE **x)
{
    NODE *p,*q;
    int ch,age,pos,count=1;

    if(*x==NULL)
    {
        printf("ENter elements for new list..\n");
        p=newnode();
        *x=p;
        printf("Enter Age : ");
        scanf("%d",&p->n);
        p->next=NULL;
    }
    else
    {
        printf("Enter the elements of Existing List :\n");
        printf("Enter Age:");
        scanf("%d",&age);
        p=*x;

        if((*x)->n < age)
        {
            pos=((((*x)->n)/2)+1);
            while(p != NULL)
            {
                count++;
                if(count==pos)
                {
                    q=p->next;
                    p->next=newnode();
                    p=p->next;
                    p->n=age;
                    p->next=q;
                    break;
                }
            p=p->next;
            }
        }

        else
            {
                printf("Coming to else part (insert rear)");
                while(p->next != NULL)
                    p=p->next;

                p->next=newnode();
                p=p->next;
                p->n=age;
                p->next=NULL;

            }

    }

}
void display(NODE *h)
{
    NODE *p;
    p=h;
    printf("Printing...\n");
    while(p!=NULL)
    {
        printf(" %-4d",p->n);
        p=p->next;

    }
}
