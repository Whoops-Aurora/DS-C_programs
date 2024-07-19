#include <stdio.h>
#include <stdlib.h>

typedef struct vaccination
{
    char name[10];
    long int ID;
    int vacc;
}SV;
void write_file(FILE*fptr,SV a[200],int n)
{
    int i;
    fptr=fopen("E:\\Vaccination.txt","w");
    for(i=0;i<n;i++)
    {
        printf("Fill in the details\n");
        printf("Name:\t");
        scanf("%s",a[i].name);
        printf("ID:\t");
        scanf("%ld",&a[i].ID);
        printf("Vacc_dose:\t");
        scanf("%d",&a[i].vacc);
        fprintf(fptr,"%s\n%ld\n%d\n",a[i].name,a[i].ID,a[i].vacc);
    }
    fclose(fptr);
}
void read_file(FILE*fptr,SV a[200])
{
    int i,count=0;
    fptr=fopen("E:\\Vaccination.txt","r");
    if(fptr==NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    while(!feof(fptr))
    {
        fscanf(fptr,"%s\n%ld\n%d\n",a[i].name,&a[i].ID,&a[i].vacc);
        printf("%s\n%ld\n%d\n",a[i].name,a[i].ID,a[i].vacc);
        count++;
        printf("count=%d",count);

    }
    fclose(fptr);
}
void vaccination(FILE*fptr,SV a[200],int n)
{
    int i;
     fptr=fopen("E:\\Vaccination.txt","a");
    if(fptr==NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i].vacc==1)
            {
                fprintf(fptr,"%s\n%ld\n%d\n",a[i].name,a[i].ID,a[i].vacc);

            }
            else
                printf("Not yet vaccinated\n");
        }
    }
    fclose(fptr);
}
main()
{
    int n;
    SV a[200];
    FILE*fptr;
    printf("Number of students\n");
    scanf("%d",&n);
    if(n>0 && n<=200)
    {
        printf("Enter student details\n");
        write_file(fptr,a,n);
        printf("Read details\n");
        read_file(fptr,a);
        vaccination(fptr,a,n);
    }
    else
        printf("Invalid input\n");
}
