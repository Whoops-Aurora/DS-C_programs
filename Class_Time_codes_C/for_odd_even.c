#include<stdio.h>
main()
{
    int os,es,r1,r2,i,j;
    printf("Enter the range\n");
    scanf("%d%d",&r1,&r2);
    if(r1<r2)
    {
        i=r1;
        j=r2;
        printf("comaprison r1>r2\n");
    }
    else
    {
        i=r2;
        j=r1;
        printf("comaprison Ulta");
    }
    for(os=0,es=0;i<=j;i++)
    {
        if(i%2==0)
        {
            es=es+i;
            printf("even");
        }
        else
        {
            os=os+i;
            printf("odd");
        }
        printf("inside loop");
    }
    printf("\nSum of even numbers=%d\n",es);
    printf("Sum of Odd numbers=%d\n",os);

}
