#include<stdio.h>
#include<math.h>
main()
{
    int r1,r2,sum=0,t;
    printf("Input Range=");
    scanf("%d%d",&r1,&r2);
    if(r1>r2)
    {
        t=r1;
        r1=r2;
        r2=t;
    }
    sum=prime_or_not(r1,r2);
    printf("Sum of prime numbers=%d",sum);
}
int prime_or_not(int r1,int r2)
{
    int flag=0,i,j,sum=0;
    for(i=r1;i<=r2;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
    {
        sum+=i;
    }
    }
    return sum;
}
