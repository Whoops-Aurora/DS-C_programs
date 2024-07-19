#include<stdio.h>
struct NODE
{
    int data;
    struct NODE *next,*prev;
};
typedef struct NODE *node;
#define newnode() (node)malloc(sizeof(NODE))
void insert(node *head);
void deletion(node *head);
void display(struct NODE head);
main()
{
    int ch;
    node head=NULL;
    while(1)
    {
        printf("Enter choice:\n 1)Insert\n 2)Delete\n 3)Traverse\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&head);
            break;
        case 2:
            deletion(&head);
            break;
        case 3:
            display(head);
            break;
        default:
            printf("Exiting...Thankyou!!");
            return 0;
        }
    }
}
void insert(node *head)
{
    node p;
    p=*h;
    if(p==NULL)
    {
        printf("Empty List...\n Creating list...\n");
        p=newnode();
        p->next=NULL;
        p->prev=NULL;
    }

}
