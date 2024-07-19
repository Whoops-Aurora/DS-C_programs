#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct PLACE
{
    char city[30];
    struct PLACE *next,*prev;
}*node;
int check_p(node head,int n)
{
    int i;
    node cur,p;
    cur=head;
    p=head;
    if(head==NULL)
    {
        return 50;
    }
    for(i=0;i<n;i++)
    {
        cur=cur->next;
    }
    for(i=0;i<n;i++)
    {
        if(strcmp(cur->city,p->city)==0)
        {
            return 0;
        }
        cur=cur->next;
        p=p->next;
    }
    return 1;
}
node createnode()
{
    node nw;
    nw=(node*)malloc(sizeof(struct PLACE));
    if(nw==NULL)
    {
    printf("not created\n");
    exit(0);
    }
    gets(nw->city);// gets gets gets gets gets gets gets gets gets gets gets gets gets gets gets gets gets gets
    nw->next=NULL;
    nw->prev=NULL;
    return nw;
}
node insertrear(node head)
{
    node cur,newnode;
    if(head==NULL)
    {
        head=createnode();
        return head;
    }
    newnode=createnode();
    cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->prev=cur;
    return head;
}
void display_r(node head,int n)
{
    node cur;
    int i;
    cur=head;
    for(i=0;i<n;i++)
        {
            cur=cur->next;
        }
        printf("Display_r\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",cur->city);
        cur=cur->next;
    }
}
main()
{
    node head=NULL;
    int n,i,flag;
    scanf("%d",&n);
    if(n<3)
    {
        printf("Cities should be more than 2\n");
        exit(0);
    }
    else
    {
        for(i=0;i<2*n;i++)
        {
            fflush(stdin);
            head=insertrear(head);
            fflush(stdin);
        }

    }
    display_r(head,n);

    flag=check_p(head,n);
    if(flag==50)
    {
        printf("\nEmpty list\n");
        exit(0);
    }
    else if(flag==1)
    {
        printf("\nNot Palindrome.\n");

    }
    else
    {
        printf("\nPalindrome.\n");
    }
}

