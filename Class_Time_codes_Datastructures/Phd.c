#include<stdio.h>
struct NODE
{

char name[10], pro[10];

float pop;

struct NODE *next;

};

typedef struct NODE *node;

node create (node head);

node delete_pop(node head);

#define newnode() (node)malloc(sizeof(struct NODE))
main()
{
    node head=NULL;
    head=create(head);
    head=delete_pop(head);
}
node create (node head)
{


node p;

int ch;


if (head==NULL)

    {

	//printf("");
	p = newnode();

printf ("  NULL Exe  \n");

head = p;

}

  do

    {

printf ("Enter name:");

scanf ("%s", p->name);

printf ("Enter profession:");

scanf ("%s", p->pro);

printf ("Enter popu:");

scanf ("%f", &p->pop);


printf ("Continue (1/0)?:");

scanf ("%d", &ch);

if (ch == 1)

	{

p->next = newnode();

p = p->next;

}

      else

	{

p->next = head;

break;

}

}
  while (1);

printf ("List....\n");

p = head;

while(p->next != head)

    {

printf("Name:%s\t profession:%s\t popularity:%.2f\n",p->name,p->pro,p->pop);

p = p->next;

}

printf("Name:%s\t profession:%s\t popularity:%.2f\n ",p->name,p->pro,p->pop);

p = p->next;


return head;

}
node delete_pop(node head)
{
    node p,prev=NULL;
    p=head;
    while(p->next!=head)
    {
        if(p->pop<100.0)
        {
            if(prev==NULL)
            {
                head=head->next;
            }
            prev->next=p->next;
        }
        prev=p;
        p=p->next;
    }
    p = head;
printf("List:\n");
while(p->next != head)

    {

printf("Name:%s\t profession:%s\t popularity:%.2f\n",p->name,p->pro,p->pop);

p = p->next;

}
    return head;
}
