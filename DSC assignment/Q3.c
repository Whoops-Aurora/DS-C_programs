//01FE21BEC211
#include<stdio.h>
main()
{
    char type_of_worker;
    float wages,hours;
    printf("Input total work hours=");
    scanf("%f",&hours);
    printf("Input type_of_worker[M/F]=");
    scanf("%*c%c",&type_of_worker);
    switch(type_of_worker)
    {
 case 'M':
    if(hours<=6 && hours>0)
        wages=200;
    else
        wages=200+(hours-6)*60;
    break;
 case 'F':
    if(hours<=6 && hours>0)
        wages=250;
    else
        wages=200+(hours-6)*60;
    break;
    default:
    printf("Invalid input");
    exit(0);
    }
    printf("Total amount to be paid=Rs%0.2f",wages);
}
