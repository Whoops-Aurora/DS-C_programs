#include<stdio.h>
main()
{
    int n1,n2,i,j;
    printf("Input a range[n1-n2]=");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        n1=j;
        n2=i;
    }
    else
    {
        n1=i;
        n2=j;
    }
    for(i;i<=j;i++)
    {
    if(i==reverse(i))
        printf("Given number %d is palindrome\n",i);
    }
}
int reverse(int a)
{
    int ans=0,rem;
    while(a>0)
    {
        rem=a%10;
        ans=ans*10+rem;
        a=a/10;
    }
    return ans;
}
