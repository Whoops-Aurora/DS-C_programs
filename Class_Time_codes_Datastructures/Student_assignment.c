//Student,search and delete roll...count scored 90 marks...add student after roll;1315;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct doctor
{
    char name[10];
    int roll;
    float marks;
    struct doctor *next;
};
typedef struct doctor *node;
node search_delete(node head,int key);
node add_1315(node head);
node create(node head);
void count(node head);
#define newnode() (node)malloc(sizeof(struct doctor));
main()
{
    int key;
    node head=NULL;
    head=create(head);
    head=search_delete(head,key);
    count(head);
    head=add_1315(head);
}
node search_delete(node head,int key)
{
    node p,prev;
    int f=0;
    p=head;
    while(p!=NULL)
    {
        if(p->roll==key)
        {
            printf("%d roll number found...deleting...\n",p->roll);
            prev->next=p->next;
            free(p);
            f=1;
            break;
        }
        prev=p;
        p=p->next;
    }
    if(f=0)
    {
        printf("Roll number not found\n");
    }
    return head;
}
void count(node head)
{
    node p;
    int count=0;
    p=head;
    while(p!=NULL)
    {
        if(p->marks==90.0)
        {
            count++;
        }
    }
    printf("Total students who scored 90=%d",count);
    return 0;
}
node add_1315(node head)
{
    node temp,p;
    int f=0;
    p=head;
    while(p!=NULL)
    {
        if(p->roll==1315)
        {
            temp=p->next;
            p->next=(node)malloc(sizeof(struct doctor));
            p=p->next;
            printf("ROll 1315 found enter student details:\n");
            scanf("%s%d%f",p->name,p->roll,p->marks);
            p->next=temp;
            free(temp);
            f=1;
            break;
        }
        p=p->next;
    }
    if(f==0)
    {
        printf("Roll number wasn't found");
    }
    return head;
}
node create(node head)
{
    node p;
    int ch;

    if(!head)
    {
        //printf("");
        p=newnode()
        printf("  NULL Exe  \n");
        head=p;
    }
    do
    {
       /* printf("Enter name:");
        scanf("%s",p->name); */
        printf("Enter roll:");
        scanf("%d",&p->roll);
       /* printf("Enter marks");
        scanf("%f",&p->marks); */

        printf("Continue (1/0)?:");
        scanf("%d",&ch);
        if(ch==1)
        {
            p->next=newnode()
            p=p->next;
        }
        else
        {
            p->next=NULL;
            break;
        }
    }while(1);
    printf("List....\n");
    p=head;
    while(p!=NULL)
    {
      //  printf("Name:%s\tRoll:%d\t marks:%.2f\n",p->name,p->roll,p->marks);
      printf("roll:%d\n",p->roll);
        p=p->next;
    }
    return head;
}
