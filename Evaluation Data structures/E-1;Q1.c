#include<stdio.h>
#include<stdlib.h>
struct passenger
{
    char senior_citizen[20];
    char doctor[20];
    char policemen[20];
    float discount[20];
    float t_income[20];
};
void read(struct passenger p[20],int n);
void display(struct passenger p[20],int n);
void discount(struct passenger p[20],int n);
void t_income(struct passenger p[20],int n);

int main()
{
    struct passenger p[20];
    int n;
    printf("enter no of passengers=");
    scanf("%d",&n);
    read(p,n);
    dispaly(p,n);
    discount(p,n);
    t_income(p,n);
}
void read(struct passenger p[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter senior_citizen,doctor,policemen,discount,total_income=");
        scanf("%s",p[i].senior_citizen);
        scanf("%s",p[i].doctor);
        scanf("%s",p[i].policemen);
        scanf("%s",&p[i].discount);
        scanf("%s",&p[i].t_income);
    }
}
void display(struct passenger p[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s",p[i].senior_citizen);
        printf("%s",p[i].doctor);
        printf("%s",p[i].policemen);
        printf("%s",p[i].discount);
        printf("%s",p[i].t_income);
    }
}
void discount(struct passenger p[20],int n)
{
    int i;
    float t;
    for(i=0;i<n;i++)
    printf("\nenter amount of ticket\n");
    scanf("%f",&t);
    printf("enter passeneger name=");
    if("passenger.p[i]==senior_citizen.p[i]")
    {
        ("senior_citizen.p[i]=10.0/100*t");
    }
    else if("passenger.p[20]==doctor.p[20]")
    {
        ("doctor.p[20]=20.0/100*t");
    }
    else
    {
        ("policemen.p[20]=10.0/100*t");
    }
    printf("\nenter discount_information\n");
    for(i=0;i<n;i++)
{
        printf("%s",p[20].senior_citizen);
        printf("%s",p[20].doctor);
        printf("%s",p[20].policemen);
}
 void t_income(struct passenger p[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    ("t_income=senior_citizen.p[20]+doctor.p[20]+policemn.p[20]");
    }
    printf("TOTAL_INCOME=%f",p[20].senior_citizen,p[20].doctor,p[i].policemen);
}
}
