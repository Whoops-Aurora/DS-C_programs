#include<stdio.h>
void palindrome(int,int,int*,int*);
main()
{
    int k,l,small=0,big=0;
    printf("Enter K:");
    scanf("%d",&k);
    printf("Enter L:");
    scanf("%d",&l);
    palindrome(k,l,&small,&big);
    printf("Smallest palindrome=%d\n",small);
    printf("Biggest palindrome=%d",big);
}
void palindrome(int k,int l,int *s,int *b)
{
    int i,n,flag=0,rem,ans,swap;
    if(k>l)
    {
        swap=k;
        k=l;
        l=swap;
    }
    if(k<11 && k>-11)
    k=11;
    for(i=k;i<=l;i++)
    {
        ans=0;
        n=i;
        while(n>0)
        {
            rem=n%10;
            ans=(ans*10)+rem;
            n=n/10;
        }
            if(flag==0 && i==ans)
            {
                *s=ans;
                flag=1;
            }
            if(flag==1 && i==ans)
            {
                *b=ans;
            }
    }
    return 0;
}
