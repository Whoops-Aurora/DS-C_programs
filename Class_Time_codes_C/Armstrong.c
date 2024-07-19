#include<stdio.h>
#include<math.h>
main()
{
    long int r1,r2,sum,i,d,t;
    printf("Input Range=");
    scanf("%d%d",&r1,&r2);
    if(r1>r2)
    {
        t=r1;
        r1=r2;
        r2=t;
    }
    for(i=r1;i<=r2;i++)
    {
        t=i;
        sum=0;
        while(t!=0)
        {
            d=t%10;
            sum=sum+d*d*d;
            t=t/10;

        if(sum==i)
         printf("%d\t",i);
        }
    }
}
