#include<stdio.h>
void divide(int,int*);
main()
{
    int n,sum=0;
    printf("enter a natural number N:");
    scanf("%d",&n);
    divide(n,&sum);
    printf("\nSum of all divisors =%d",sum);
}
void divide(int n,int *s)
{
    int i;
    printf("Divisors are...\n");
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%6d",i);
            *s=*s+i;
        }
    }
}
