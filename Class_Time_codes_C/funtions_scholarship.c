#include<stdio.h>
main()
{
    int n;
    printf("Input total students n=");
    scanf("%d",&n);
    scholarship(n);
}
void scholarship(int n)
{
    int i,fee,rank;

    for(i=1;i<=n;i++)
    {
    printf("Input %d student's rank=\n",i);
    scanf("%d",&rank);
    printf("Input %d student's institution fees=\n",i);
    scanf("%d",&fee);
    if(rank>0&&rank<51)
        fee=0;
    else if(rank>50&&rank<101)
        fee=fee/2;

    printf("\nstudent number '%d's institution fees=%d\n",i,fee);
    }
}
