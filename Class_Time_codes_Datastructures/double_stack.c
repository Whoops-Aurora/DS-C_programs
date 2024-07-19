#include<stdio.h>
#define SIZE 20
struct advertisments
{
    char message[30];
    int time[2];
};
struct stack
{
   int data[SIZE];
   int top;
   int active;
};
void push(struct stack*sptr,int num)
{

    if(sptr->top==SIZE-1)
    {
        printf("stack overflow \n");
    }
    else
    {
        sptr->top++;
        sptr->data[sptr->top]=num;
    }
}
int pop(struct stack*sptr)
{
    int num;
    if(sptr->top==-1)
        printf("stack underflow\n");
    else
       {
           num=sptr->data[sptr->top];
           sptr->top--;
       }
       return num;
}
void count(struct stack*sptr1,struct stack*sptr2)
{
    int p1,p2,n1,n2,num1,num2;
    p1=0,p2=0,n1=0,n2=0;
    while(sptr1->top!=-1)
    {
        num2=pop(sptr1);
        if(num2>0)
            p1++;
        else if(num2<0)
            n1++;
    }
    while(sptr2->top!=-1)
    {
        num1=pop(sptr2);
        if(num1>0)
            p2++;
        else if(num1<0)
            n2++;
    }

    printf("Positive count in stack1=%d\n",p1);
    printf("negative count in stack1=%d\n",n1);
    printf("Positive count in stack2=%d\n",p2);
    printf("negative count in stack2=%d\n",n2);
}
int main()
{
    struct stack s1,s2;
    struct stack*sptr1,*sptr2;
    sptr1=&s1;
    sptr2=&s2;
    sptr1->top=-1;
    sptr2->top=-1;
    int i,n,m,num;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(sptr1,num);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&num);
        push(sptr2,num);
    }
    count(sptr1,sptr2);
    printStackStrings(struct stack stack1)
    return 0;
}
void printStackStrings(void)
{
  for(int i = 0; i < stack1; i++)
    printf("%s\n", messages[i]);
}

