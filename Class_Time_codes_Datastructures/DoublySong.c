#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>

typedef struct NODE
{
    /* char NODE_name[20];
    char singer_name[20];
    char film_name[20];
    int duration;
    int year; */
    int data;
    struct NODE *llink,*rlink;
}*node;
void displayf(node head);
void displayb(node head);
node insertfront(node head);
node insertrear(node head);
node deletefront(node head);
node deleterear(node head);
int choice(node head);
void displayarrow(node head);

node createnode()
{
    node nw;
    nw=(node*)malloc(sizeof(struct NODE));
    printf("enter the data:");
    scanf("%d",&nw->data);
    // printf("element details to be inserted\n");
    // scanf("%s%s%s%d%d",nw->NODE_name,nw->singer_name,nw->film_name,&nw->duration,&nw->year);
    nw->rlink=NULL;
    nw->llink=NULL;
    return(nw);

}

main()
{
    node head=NULL;
    int choice;

    while(1)
    {
        printf("1->insert front\n 2->insert rear\n 3->display forward\n4-display backward\n5-delete front\n6-delete rear\n7-display with arrows\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            head=insertfront(head);
            break;
        case 2:
            head=insertrear(head);
            break;
        case 3:
            displayf(head);
            break;
        case 4:
            displayb(head);
            break;
        case 5:
            head=deletefront(head);
            break;
        case 6:
            head=deleterear(head);
            break;
        case 7:
            displayarrow(head);
            break;
        default:
            return 0;
        }
    }
}
void displayf(node head)
{
    node cur;
    cur=head;
    while(cur!=NULL)
    {
        printf(" %-3d",cur->data);
        //printf("%s\n%s\n%s\n%d\n%d\n",cur->NODE_name,cur->singer_name,cur->film_name,cur->duration,cur->year);
        cur=cur->rlink;
    }
    return head;
}

void displayb(node head)
{
    node cur,t;
    cur=head;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    t=cur;
    while(t!=NULL)
    {
        printf(" %-3d",cur->data);
        //printf("%s\n%s\n%s\n%d\n%d\n",cur->NODE_name,cur->singer_name,cur->film_name,cur->duration,cur->year);
        t=t->llink;
    }
    return head;
}

node insertfront(node head)
{
    node newnode;
    newnode=createnode();
    newnode->rlink=head;
    head->llink=newnode;
    head=newnode;
    return head;
}

node insertrear(node head)
{
    node cur,newnode;
    newnode=createnode();
    cur=head;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=newnode;
    newnode->llink=cur;
    return head;
}

node deletefront(node head)
{
    node cur;
    cur=head;
    if(head==NULL)
    {
        head=head->rlink;
        return head;
    }
    head=head->rlink;
    head->llink=NULL;
    printf("%d node is deleted",cur->data);
    free(cur);
    return head;

}

node deleterear(node head)
{
    node cur,prev;
    cur=head;
    prev=NULL;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    prev=cur->llink;
    prev->rlink=NULL;
    printf("%d node is deleted",cur->data);
    free(cur);
    return head;
}
int choice(node head)
{
int ch1, ch2;
printf("PRESS A KEY TO CONTINUE \n");
ch1 = getch();
ch2 = 0;
if (ch1 == 0xE0) { // a scroll key was pressed
ch2 = getch();
// determine what it was
switch(ch2)
{
case 72: printf("\nUP WAS PRESSED\n"); return 1;
case 80: printf("\nDOWN WAS PRESSED\n"); return 0;
case 75: printf("\nLEFT WAS PRESSED\n"); return 1;
case 77: printf("\nRIGHT WAS PRESSED\n"); return 0;
// ... we can set also others like HOME, END, PGUP, PGDOWN, ...
default:
printf("SOME OTHER SCROLL KEY PRESSED: %d %d\n", ch1, ch2); break;
};
}
else
printf("key pressed: %d %c\n", ch1, ch2);
system("pause");
}
void displayarrow(node head)
{
    node cur;
    int ch;
   /* if(head==NULL)
    {
        printf("Empty list\n");
        return 0;
    } */

    while(1)
    {
        ch=choice(head);
        if(ch==1)
        {
            if(cur->rlink==NULL)
            {
                printf("This is the last node\n");
            }
            else
            {
                cur=cur->rlink;
                printf("%d\n",cur->data);
            }
        }
        else if(ch==0)
        {
            if(cur->llink==NULL)
            {
                printf("This is the First node\n");
            }
            else
            {
                cur=cur->llink;
                printf("%d\n",cur->data);
            }
        }
        else
            break;
    }
}
