#include<stdio.h>
#define max 10
typedef struct node
{
    int n[max];
    int top=-1;
}stk;
main()
{
    stk s;
    char line[12];
    char *e;
    printf("Enter expression:");
    scanf("%s",line);

    converter(line,&s);
}
void converter(char *e,stk *s)
{
    if(*e=='(')
        push(*e,&(*s));
    else if(*e==')')
    {
        while((x=pop(&(*s)))!= '(')
                printf("%c",x);
    }
    else
    {
        while(priority(s->n[s->top]) >= priority(*e))
            printf("%c",pop(&(*s)));
        push(*e);
    }
    e++;
    while(top != -1)
    {
        printf("%c",pop(&(*s)));
    }
    return 0;
}
