//01FE21BEC211
#include<stdio.h>
main()
{
    int basic_gross_salary;
    float gross_salary=0;
    printf("Input base gross_salary=");
    scanf("%d",&basic_gross_salary);
    if(basic_gross_salary>0 && basic_gross_salary<=12000)
    {
        gross_salary = basic_gross_salary + basic_gross_salary * 0.35 + basic_gross_salary *0.1 +500;
    }
    else if(basic_gross_salary>=12001 && basic_gross_salary<=20000)
    {
        gross_salary = basic_gross_salary + basic_gross_salary * 0.47 + 12000 * 0.15 + 500;
    }
    else if(basic_gross_salary>=20001 && basic_gross_salary<=25000)
    {
    gross_salary = basic_gross_salary + basic_gross_salary * 0.54 + 20000 * 0.17 + 500;
    }
    else if(basic_gross_salary>=25001)
    {
    gross_salary=basic_gross_salary+basic_gross_salary*0.59+25000*0.19+500;
    }
    else
    {
    printf("Invalid Input base gross_salary\n");
    }
    printf("\nGross gross_salary =%0.2f",gross_salary);
}
