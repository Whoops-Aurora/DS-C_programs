#include<stdio.h>
main()
{
    int a[10][10],n,m;
    printf("enter no. heath center:");
    scanf("%d",&n);
    printf("enter no. Vaccine supplied:");
    scanf("%d",&m);

    read(a,n,m);
    display(a,n,m);
    min_vaccine(a,n,m);
}


void read(int a[10][10],int n,int m)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[10][10],int n,int m)
{
    int i,j;
    printf("\tDisplay...\n");
    for(i=0;i<n;i++)
    {
        printf("\t");
        for(j=0;j<m;j++)
        {
            printf("%-4d\t",a[i][j]);
        }
        printf("\n");
    }
}


void min_vaccine(int a[10][10],int n,int m)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min=a[0][i];
        for(j=0;j<m;j++)
        {
            if(a[i][j]<min)
                min=a[i][j];
        }
        printf("healthcenter:%d min vaccine=%d\n",i+1,min);
    }
}
