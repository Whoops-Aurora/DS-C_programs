#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct celebrity
{
    char name[20];
    int pop;
    struct celebrity*next;

};
typedef struct celebrity*node;
node createnode()
{
    node t;

    t=(node*)malloc(sizeof(struct celebrity));
    printf("name,followers\n");
    scanf("%s%d",t->name,&t->pop);
    t->next=t;
    return  t;
}
node insertrear(node head)
{
    node t,cur;
    t=createnode();
    if(head==NULL)
    {
        return t;
    }
    cur=head;
    while(cur->next!=head)
    {
        cur=cur->next;
    }
    cur->next=t;
    t->next=head;
    return head;

}
node deletefriend(node head)
{
    node cur,prev,temp;
    cur=head;
    prev=NULL;
    if(head->pop<100)
    {
       temp=head;
        printf("%s %d is the deleted node\n",temp->name,temp->pop);
        while(cur->next!=head)
            cur=cur->next;
        cur->next=cur->next->next;
        head=cur->next->next;
        free(temp);

    }
    cur=head;

    while(cur->next!=head)
    {
        prev=cur;
        cur=cur->next;
        if(cur->pop<100)
        {
            temp=cur;
            printf("%s %d is the deleted node\n",temp->name,temp->pop);
            prev->next=cur->next;
            cur=cur->next;
            free(temp);
        }
    }

        return head;

}
node deleterear(node head)
{
    node cur,prev;
    cur=head;
    if(head->next==head)
    {
       printf("name:-%s followers:-%d\n",cur->name,cur->pop);
        free(head);
        head=NULL;
        return head;
    }
    cur=head;
    while(cur->next!=head)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=head;
   printf("name:-%s followers:-%d\n",cur->name,cur->pop);
    free(cur);
    return head;
}
node display(node head)
{
    node cur;
    cur=head;
    while(cur->next!=head)
    {
         printf("name:-%s followers:-%d\n",cur->name,cur->pop);
        cur=cur->next;
    }
   printf("name:-%s followers:-%d\n",cur->name,cur->pop);
    return head;
}
main()
{
    node head=NULL;
    int choice;
    while(1)
    {
        printf("1.insert rear\n2.delete rear\n3.dispaly\n4.delete friend\n5.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            head=insertrear(head);
            break;
        case 2:
            head=deleterear(head);
            break;
        case 3:
            head=display(head);
            break;
        case 4:
            head=deletefriend(head);
            break;
        case 5:
            exit(0);

        }
        fflush(stdin);
    }
}
