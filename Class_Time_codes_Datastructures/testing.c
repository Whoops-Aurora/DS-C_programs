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

#define newnode() (node)malloc(sizeof(struct NODE))

main()
{
    node head=NULL;
    head=create(head);
}
node create (node head)
{


node p;

int ch;


if (!head)

    {

	//printf("");
	p = newnode ();

printf ("  NULL Exe  \n");

head = p;

}

  do

    {

printf ("Enter name:");

scanf ("%s", p->name);

printf ("Enter singer:");

scanf ("%s", p->add);

printf ("Enter House.No:");

scanf ("%d", &p->hno);

printf ("Enter Plot.no:");

scanf ("%d", &p->plot);


printf ("Continue (1/0)?:");

scanf ("%d", &ch);

if (ch == 1)

	{

p->next = newnode ();

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

while (p->next != head)

    {

printf ("Name:%s\t address:%s\t House.no:%d\t Plot.no:%d\n", p->name,
	       p->add, p->hno, p->plot);

p = p->next;

}
printf ("Name:%s\t address:%s\t House.no:%d\t Plot.no:%d\n", p->name,
	       p->add, p->hno, p->plot);

p = p->next;


return head;

}
