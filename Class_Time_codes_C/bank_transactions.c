#include<stdio.h>
main()
{
    int balance;
    printf("Input account balance=");
    scanf("%d",&balance);
    balance=debit(balance);
    printf("Total balance after all charges and withdrawal=%d",balance);
}
int debit(int b)
{
    int i,attempt,take,flag=0;
    for(i=1,attempt=1;i<20;i++,attempt++)
    {
        printf("Input money to be withdrawn or input 0 to finish all transactions=");
        scanf("%d",&take);
        if(take==0)
        {
            flag=1;
            break;
        }
        if(take%5==0)
        {
             b=b-take;
            continue;
        }
        else
        {
            printf("Invalid cash input\n");
            return 0;
        }
        if(flag==1)
            break;
    }
    if(attempt>=4)
    {
        b=b-(attempt-3)*5;
    }
    return b;
}
