//half done
#include<stdio.h>
int check(int);
main()
{
    int n,flag;
    printf("Input a Number:");
    scanf("%d",&n);
    flag=check(n);
    printf("Flag=%d",flag);
    if(flag==0)
        printf("Increasing number");
        else if(flag==1)
            printf("Decreasing Number");
            else
                printf("Bouncy number");
}
int check(int n)
{
    int num=0,flag,rem,f2=0;
    while(n>0)
        {
            rem=n%10;
            if(f2==1)
            {
                if(flag==1 && num<rem)
                {
                    return 23;
                }
                else if(flag==0 && num>rem)
                    {
                    return 23;
                    }
            }
            if(num>rem)
            {
                num=rem;
                flag=1;
            }
            else if(num<rem)
            {
                num=rem;
                flag=0;
            }
            n=n/10;
            f2=1;
        }
        return flag;
}
