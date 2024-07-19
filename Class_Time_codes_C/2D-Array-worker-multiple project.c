#include<stdio.h>
main()
{
    int s[20][20],i,max[1][1];
    int workers,project;
    printf("enter number of workers:");
    scanf("%d",&workers);
    printf("enter number of projects:");
    scanf("%d",&project);
    read(s,workers,project);
    PRINT(s,workers,project);
    max_worker(s,workers,project);
}
void read(int a[20][20],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void PRINT(int a[20][20],int row,int col)
{
    int i,j;
    printf("\t Displaying output...:\n");
    for(i=0;i<row;i++)
    {
        printf("\n\t");
        for(j=0;j<col;j++)
        {
            printf(" %-4d",a[i][j]);
        }
        printf("\n");
    }
}
void max_worker(int a[20][20],int row,int col)
{
    int max,i,j;
    for(i=0;i<row;i++)
    {
        max=0;
        for(j=0;j<col;j++)
        {
            max=a[i][j]+max;
        }
        printf("max of %d worker=%d\n",i+1,max);
    }
}

