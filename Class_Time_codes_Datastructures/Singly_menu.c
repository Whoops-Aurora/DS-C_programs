#include<stdio.h>
#include<stdlib.h>
typedef struct node
{

    char name[20];
    char USN[15];
    int n;
    struct node *next;
} NODE;
#define newnode() (NODE*)malloc(sizeof(NODE))
main()
{
    NODE *h=NULL,*p;
    int ch;
    while(1)
    {
        printf("enter choice \n 1)Create\n 2)Delete\n 3)Insert\n 4)Count same names");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create(&h);
                break;
            case 2:
                deletion(&h);
                break;
            case 3:
                insert(&h);
                break;
            case 4:
                search_display(h);
                break;
            default :
                printf("Exiting");
                exit(1);
        }
    }
}

//Creating a node
void create(NODE **h)
{
    NODE *p,*head;
    int ch;
    p=*h;
        if(p==NULL)
        {
        p=newnode();
        p->next=NULL;
        }
    head=p;
    do
    {
        printf("Enter the Roll:");
        scanf("%d",&p->n);
        fflush(stdin);
        printf("Enter the Name:");
        scanf("%s",p->name);
        fflush(stdin);
        printf("Enter the USN:");
        scanf("%s",p->USN);
        fflush(stdin);

        printf("Continue (1/0):");
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
    p=head;
    printf("List created...\n");
    while(p!=NULL)
    {
        printf(" %-4d %-6s %-6s \n",p->n,p->name,p->USN);
        p=p->next;
    }
    //when returning the head should point to head as we changing in the main function;
    p=head;
}

void insert(NODE **h)
{
    NODE *p,*q,*head;
    int posi,replace,count=0;
    p=*h;
    head=*h;
    printf("Enter position to add to");
    scanf("%d",&posi);
    while(p!=NULL)
    {
        count++;
        if(count==posi)
        {
            printf("Enter int to insert here...:");
            scanf("%d",&replace);
            q=p;
            p->next=newnode();
            p=p->next;
            p->n=replace;
            q->next=p->next;
            break;
        }
        p=p->next;
    }
    p=head;
     while(p!=NULL)
    {
        printf("%d\t",p->n);
        p=p->next;
    }
    p=head;
}
void deletion(NODE **h)
{
    int s;
    NODE *t,*p,*head;
    printf("Enter number to delete");
    scanf("%d",&s);
    p=*h;
    head=p;
    while(p->next!=NULL)
    {
        if(p->next->n==s)
        {
            t=p->next;
            free(p);
            p=t;
            break;
        }
        p=p->next;
    }
    p=head;
}
void search_display (NODE *head)
{
    NODE *cur;
    cur=head;
    int f=0,count=0;
    char name[20];

    printf ("Enter name to search:");
    scanf ("%s", name);

    while (cur->next != head)
        {
        if (strcmp(cur->name, name) == 0)
        {
            count++;
            f=1;
        }
    cur = cur->next;
    }
    if(f==0)
        {
            printf("No duplicate names\n");
        }
    else
        printf("Total duplicate name count=%d",count);
}

