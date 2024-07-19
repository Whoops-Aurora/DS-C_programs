#include<stdio.h>
#include<stdlib.h>
struct NODE
{

char name[10], add[25];

int hno, plot;

struct NODE *next;

};

typedef struct NODE *node;

node create (node head);

node insert_end (node head);

node insert_front (node head);

node delete_rear (node head);

node delete_front (node head);

node search_add(node head);
#define newnode() (node)malloc(sizeof(struct NODE))
main()
{
    node head=NULL;

    head=create(head);
   /* head=insert_end(head);
    head=insert_front(head);
    head=delete_rear(head);
    head=delete_front(head); */
    head=search_add(head);

}
node insert_end (node head)
{


node cur;

cur = head;

while (cur->next != head)

    {

cur = cur->next;

}

cur->next = newnode ();

cur->next = head;


return head;

}


node insert_front (node head)
{

node cur;

cur = head;

while (cur->next != head)

    {

cur = cur->next;

}

cur->next = newnode ();

cur = cur->next;

cur->next = head;

head = cur;

return head;

}


node delete_rear (node head)
{


node prev, cur;

cur = head;

prev = NULL;


while (cur->next != head)

    {

prev = cur;

cur = cur->next;

}


prev->next = head;

free (cur);


return head;

}


node delete_front (node head)
{

node cur;

cur = head;


if (head->next == head)

    {

free (head);

return NULL;

}

while (cur->next != head)

    {

cur = cur->next;

}

cur->next = head->next;

head = head->next;


return head;

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

printf ("Enter Address:");

scanf ("%s", p->add);

printf ("Enter House.No:");

scanf ("%d", &p->hno);

printf ("Enter Plot,number:");

scanf ("%d", &p->plot);


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

printf("Name:%s\t address:%s\t H.No:%d\t Plot.no:%d\n",p->name,p->add,p->hno,p->plot);

p = p->next;

}

printf ("Name:%s\t address:%s\t H.No:%d\t Plot.no:%d\n", p->name,
	       p->add, p->hno, p->plot);

p = p->next;


return head;

}
node search_add (node head)
{

node cur,temp,p;

cur = head;


int f = 0;
int num;


printf ("Enter house number to search:");

scanf ("%d",&num);

while (cur->next != head)

    {

if (cur->hno==num)

	{
	    temp=cur->next;
	    cur->next=newnode();
	    cur=cur->next;
printf ("Enter name:");

scanf ("%s", cur->name);

printf ("Enter Address:");

scanf ("%s", cur->add);

printf ("Enter House.No:");

scanf ("%d", &cur->hno);

printf ("Enter Plot,number:");

scanf ("%d", &cur->plot);
	    cur->next=temp;
	    free(temp);

f = 1;

}

cur = cur->next;

}

if (f == 0)

    {

if (cur->hno==num)

	{
	    temp=cur->next;
	    cur->next=newnode();
	    cur=cur->next;
printf ("Enter name:");

scanf ("%s", cur->name);

printf ("Enter Address:");

scanf ("%s", cur->add);

printf ("Enter House.No:");

scanf ("%d", &cur->hno);

printf ("Enter Plot,number:");

scanf ("%d", &cur->plot);
	    cur->next=temp;
	    free(temp);

}
else
{
    printf("Name not found");
}

}
printf ("List....\n");

p = head;

while(p->next != head)

    {

printf("Name:%s\t address:%s\t H.No:%d\t Plot.no:%d\n",p->name,p->add,p->hno,p->plot);

p = p->next;

}

printf ("Name:%s\t address:%s\t H.No:%d\t Plot.no:%d\n", p->name,
	       p->add, p->hno, p->plot);

p = p->next;

return head;
}
