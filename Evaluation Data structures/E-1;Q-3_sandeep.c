#include<stdio.h>
#include<stdlib.h>
struct DEVOTEES
{
    int age,wor;
    char name[10];
    struct DEVOTEES *next;
};
typedef struct DEVOTEES *node;
node max_count(node head);
void display(node head);
void senior_count(node head);
node insert(node head);
#define newnode() (node)malloc(sizeof(struct DEVOTEES))
main()
{
    node head=NULL;
    head=insert(head);
         display(head);
         senior_count(head);
    head=max_count(head);
}
node insert(node head)
{
    node prev;
    int ch;
    if(head==NULL)
    {
        printf("New list...\n");
        head=newnode();
    }
    prev=head;
    do
    {
        printf("Enter name,age,number of worships done\n");
        scanf("%s%d%d",prev->name,&prev->age,&prev->wor);
        printf("Continue(1/0):");
        scanf("%d",&ch);

        if(ch==1)
        {
            prev=newnode();
            prev->next=head;
        }
        else
        {
            prev->next=prev;
            break;
        }
    }while(1);
    return prev;
}
void display(node head)
{
    node cur;
    cur=head;
    if(head==NULL)
    {
        printf("Empty list...\n");
        exit(0);
    }
    printf("\nDisplay function");
    while(cur->next!=head)
    {
        printf("\nName:%s age:%d times worshipped:%d",cur->name,cur->age,cur->wor);
        cur=cur->next;
    }
}
void senior_count(node head)
{
    int count=0;
    node cur;
    if(head==NULL)
    {
        printf("Empty list...senior count\n");
        exit(0);
    }
    cur=head;
    while(cur->next!=head)
    {
        if(cur->age>=60)
        {
            count++;
        }
    }
    if(cur->age>=60)
    {
        count++;
    }
    printf("\nTotal senior citizens in line:%d",count);
}
node max_count(node head)
{
    node prev,last,cur,temp;
    int max=0;
    if(head==NULL)
    {
        printf("Empty list...max_count\n");
        exit(0);
    }
    cur=head;
    while(cur->next!=head)
    {
        if(cur->age>max)
        {
            temp=cur;
            max=cur->age;
        }
        cur=cur->next;
    }
    if(cur->age>max)
        {
            temp=cur;
            max=cur->age;
        }
        cur=head;
        while(cur->age!=max)
        {
            cur=cur->next;
        }
        printf("\nSenior most person=%s,age:%d,times worshipped:%d",temp->name,temp->age,temp->wor);
        if(temp==head)
        {
            last=head;
            while(last->next!=head)
            {
                last=last->next;
            }
            head=head->next;
            last->next=head;
            free(temp);
            return head;
        }
        else if(cur->next==head)
        {
            prev=head;
            while(prev->next!=cur)
            {
                prev=prev->next;
            }
            prev->next=head;
            free(cur);
        }
            else
            {
                prev->next=cur->next;
                free(cur);
                return prev;
            }
        }

