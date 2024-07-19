//01FE21BEC211
#include<stdio.h>
main()
{
    int days,hours,allowance,payment;
    float amount;

    printf("Input no of days worked=");
    scanf("%d",&days);
    printf("Input no of hours worked=");
    scanf("%d",&hours);

    if(days>=1 && days<=3)
    {
        payment=250;
        allowance=100;
    }
    else if(days>=4 && days<=6)
        {
        payment=350;
        allowance=150;
        }
    else
        {
        payment=450;
        allowance=250;
        }
    if(hours/days<6)
    {
         printf("No allowance should be paid as min.work hours worked is %d\n",days);
        allowance=0;
    }
    amount=(payment*hours)+(allowance*days);
    printf("Total amount to be paid=%0.2f\n",amount);
}
