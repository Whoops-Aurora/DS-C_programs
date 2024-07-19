#include<stdio.h>
#include<string.h>
typedef struct ZOMATO
{
    int total,distance;
    char address[20];
    char name[10];
    char order[8];
} X;
main()
{
    int n;
    X a[30];
    printf("Enter the total customers input=");
    scanf("%d",&n);
    if(n<=0 || n>=31)
    {
        printf("Invalid number of customers");
        return 0;
    }
    read(a,n);
    display(a,n);
    sort(a,n);
    display(a,n);
    vijay(a,n);
}
void read(X *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s%s",p->distance,p->name,p->address,p->order);
        if(p->distance >= 15)
        {
            printf("Too long distance cannot deliver more than 15 kms\n");

        }
         p++;
    }

}
void display(X *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(p->order,"burger")==0)
            {
            p->total=80;
            }
            else
            {
            p->total=100;
            }
        printf("\nName=%s, address=%s, distance=%d, order=%s, bill=%d",p->name,p->address,p->order,p->total);
    }
    return 0;
}
void sort(X *p,int n)
{
    int i,j;
    X temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            temp=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+(j+1))=temp;
        }
    }
    printf("\nsorted accordingly in decending order wrt distance\n");
    return 0;
}
void vijay(X *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp((p+i)->address,"vijaynagar")==0)
        {
            printf("Customer from vijaynagar detail no.%d\n",i+1);
            printf("Name=%s, Order=%s, Bill=%d\n",p->name,p->order,p->total);
        }
    }
    return 0;
}
