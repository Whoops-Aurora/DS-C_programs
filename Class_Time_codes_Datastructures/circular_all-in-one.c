#include<stdio.h>
struct NODE
{

char name[10], singer[10], film[10];

int duration, released_year;

struct NODE *next;

};

typedef struct NODE *node;

node insert_end (node head);

node insert_front (node head);

node delete_rear (node head);

node delete_front (node head);

void search_display (node head);

void display_year (node head);

void highest (node head);

node create (node head);

#define newnode() (node)malloc(sizeof(struct NODE))
  main ()
{

node head;

head = NULL;

head = create (head);

    /*head=insert_end(head);
       head=insert_front(head);
       head=delete_front(head);
       head=delete_rear(head); */
    search_display (head);

display_year (head);

highest (head);

}

/* void print_all(node head)
{

    node p;
    p=head;
    while(p->next!=head)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n%d",p->data);
} */
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


void
search_display (node head)
{

node cur;

cur = head;


int f = 0;

char name[10];


printf ("Enter name to search:");

scanf ("%s", name);

while (cur->next != head)

    {

if (strcmp (cur->name, name) == 0)

	{

printf ("Song=%s\t singer=%s\t film=%s", cur->name, cur->singer,
		   cur->film);

f = 1;

}

cur = cur->next;

}

if (f == 0)

    {

if (strcmp (cur->name, name) == 0)

	{

printf ("Song=%s\n", cur->name);

}

}

}


void
display_year (node head)
{

node cur;

cur = head;

int year, f = 0;


printf ("\nEnter year to display list:");

scanf ("%d", &year);


while (cur->next != head)

    {

if (cur->released_year == year)

	{

f = 1;

printf ("name=%s\tsinger=%s\tfilm=%s\n", cur->name, cur->singer,
		   cur->film);

}

cur = cur->next;

}

if (f == 0)

    {

printf ("Year nothing found!!");

if (cur->released_year == year)

	{

printf ("\n%s\tsinger=%s\tfilm=%s\n", cur->name, cur->singer,
		   cur->film);

}

}

}


void
highest (node head)
{

node cur, temp;

cur = head;

int max = 0;

while (cur->next != head)

    {

if (cur->duration > max)

	{

max = cur->duration;

temp = cur;

}

cur = cur->next;

}

cur = cur->next;

if (cur->duration > max)

    {

max = cur->duration;

temp = cur;

}


printf ("\nMax duration details:\nsong name=%s\nduration=%d film=%s",
	     temp->name, temp->duration, temp->film);


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

scanf ("%s", p->singer);

printf ("Enter film:");

scanf ("%s", p->film);

printf ("Enter duration:");

scanf ("%d", &p->duration);

printf ("Enter release year:");

scanf ("%d", &p->released_year);


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

printf ("Song Name:%s\tsinger:%s\t Duration:%d\t Film:%s\n", p->name,
	       p->singer, p->duration, p->film);

p = p->next;

}

printf ("Song Name:%s\tsinger:%s\t Duration:%d\t Film:%s\n", p->name,
	   p->singer, p->duration, p->film);

p = p->next;


return head;

}
