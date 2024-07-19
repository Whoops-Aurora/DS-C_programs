#include<stdio.h>
main()
{
    int s[20][20],i;
    int students,evaluations;
    printf("enter number of students:");
    scanf("%d",&students);
    printf("enter number of evaluations:");
    scanf("%d",&evaluations);
    read(s,students,evaluations);
    PRINT(s,students,evaluations);
    for(i=0;i<students;i++)
    {
        avg=avg_student(s,i,evaluations);
        printf("Student %d avg=%.2f",i+1,avg);
    }
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
float avg_student(int a[20][20],int row,int col)
{ float avg=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            avg=a[i][j]+avg;
        }
    }
}
