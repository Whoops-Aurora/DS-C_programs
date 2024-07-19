#include <stdio.h>
main()
{
    int n,x;
    printf("Enter num and N \n");
    scanf("%d%d",&x,&n);
    sum(x,n);
}
void sum(int x, int n)
{
    int i,f,sign,num;
    int s=0;
    for(i=1,sign=1,f=1;i<=n;i++,sign=sign*(-1))
    {
        num=(pow(x,i)*sign);
        f=f*i;
        s=s+(num/f);
    }
    printf("Sum is %d",s);
    odd_even(s);
    return;
}
void odd_even(int s)
{
    if(s%2==0)
        printf("\nIt is even");
    else
        printf("\nIt is odd");
        return;
}
