//01FE21BEC211
#include<stdio.h>
main()
{
    int year;

    printf("Input a year=");
    scanf("%d",&year);

    if((year%4 ==0) && ((year%400 ==0) || (year%100!=0)))
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year,%d",year,year%4);
    }
}
