//01fe21bcs222
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


main()
{
    int stack1[100],stack2[100];
    int top1=-1,top2=-1,collisions,i,sending;
    scanf("%d",&collisions);
    if(collisions>100)
    {
        printf("Invalid Input\n");
        exit(0);
    }
    for(i=0;i<collisions;i++)
    {
        scanf("%d",&sending);
        push(stack1,&top1,sending);
    }
    for(i=0;i<collisions;i++)
    {
        scanf("%d",&sending);
        push(stack2,&top2,sending);
    }
    removal_zero(stack1,&top1);
    removal_zero(stack2,&top2);

    compare(stack1,stack2,&top1,&top2);
}

void push(int stack[100],int *top,int ele)
{
    if(ele==0)
    {
        return 0;
    }
    (*top)++;
   stack[*top]=ele;
}

int pop(int stack[100],int *top)
{
    return stack[(*top)--];
}

void compare(int stack1[100],int stack2[100],int *top1,int *top2)
{
    int same=0,diff=0,temp;
    char nothing;
    while( ((*top1)>=-1) && ((*top2)>=-1) )
    {
        if( (stack1[(*top1)] > 0 ) && (stack2[(*top2)] > 0) )
        {
            printf("0 ");
            same++;
            nothing=pop(stack1,&(*top1));
            nothing=pop(stack2,&(*top2));
        }
        else if( (stack1[(*top1)] < 0 ) && (stack2[(*top2)>=-1] < 0) )
        {
            printf("1 ");
            diff++;
            nothing=pop(stack1,&(*top1));
            nothing=pop(stack2,&(*top2));
        }
    }
    printf("\n");
    printf("%d\n",same);
    printf("%d",diff);
}

void removal_zero(int stack[100],int *top)
{
    char temp[100];
    int ttop=-1;
    while((*top>=-1))
    {
        push(temp,&ttop,stack[(*top)]);
        (*top)--;
    }
    while(ttop>=-1)
    {
        push(stack,&(*top),temp[ttop]);
    }

}
