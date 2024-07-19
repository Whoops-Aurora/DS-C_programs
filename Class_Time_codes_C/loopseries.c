#include<stdio.h>
main()
{
    int n,sum=0,i,j;
    printf("input numbers to add=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }
    }
    printf("Sum of all input numbers=%d",sum);
}
