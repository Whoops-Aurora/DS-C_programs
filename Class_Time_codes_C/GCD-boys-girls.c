#include<stdio.h>
void GCD(int,int);
main()
{
    int b,g;
    printf("Enter number of boys");
    scanf("%d",&b);
    printf("Enter number of Girls");
    scanf("%d",&g);
    GCD(b,g);
}
void GCD(int n1,int n2)
{
    int max,i;
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        max=i;
    }
    printf("Total children per row=%d",max);
}
