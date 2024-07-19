#include<stdio.h>
main()
{
    int n;
    printf("Input total students n=");
    scanf("%d",&n);

    credit_check(n);
}
void credit_check(int n)
{
    int i,credit,over_l=0,under_l=0,normal=0;
    for(i=1;i<=n;i++)
    {
        printf("Input %d students credits=",i);
        scanf("%d",&credit);
        if(credit>65)
            over_l++;
        else if(credit<35)
            under_l++;
        else
            normal++;
    }
    printf("Total overload=%d\nUnderload=%d\nNormal=%d\n",over_l,under_l,normal);
    return 0;
}
