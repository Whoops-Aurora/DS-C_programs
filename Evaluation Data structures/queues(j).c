#include<stdio.h>
#include<stdlib.h>

typedef struct plant
{
    int level;
    struct plant *next;
}*node;

void insert(node front,node rear,int data)
{
	node ptr;
	ptr = (node*)malloc(sizeof(struct plant));
	ptr->level = data;
	ptr->next = NULL;
	if ((front == NULL) && (rear == NULL))
        {
		front = rear = ptr;
	    }
	else
        {
		rear->next = ptr;
		rear = ptr;
	    }

}

int main()
{
    node *front = NULL;
    node *rear = NULL;
    int n,i,data;
    printf("enter the number of plants\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter pesticide level of plant %d\n",i+1);
        scanf("%d",&data);
        insert(front,rear,data);
    }

}
