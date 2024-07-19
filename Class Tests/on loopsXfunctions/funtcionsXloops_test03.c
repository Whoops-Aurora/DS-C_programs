#include <stdio.h>
#include <stdlib.h>
main()
{
    int n,i,d,f,cache,s=0;
    printf("Input a num=");
    scanf("%d",&n);
    cache=n;
    for(n;n!=0;n=n/10)
    {
        d=n%10;
        for(i=d,f=1;i!=0;i--)
        {
            f=f*i;
        }
        s=s+f;
    }
    if(cache==s)
        printf("It is a strong number");
    else
        printf("It is not a strong number");
}
