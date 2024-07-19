#include<stdio.h>
#define rows 100
void read(int a[rows][rows], int r,int c);
void display(int a[rows][rows],int r, int c);
void r_sum(int a[rows][rows], int r, int c);
void c_sum(int a[rows][rows], int r,int c);
void max_r(int a[rows][rows], int r,int c);
void display_d(int a[rows][rows], int r , int c);
void ute(int a[rows][rows],int r, int c);
void lte(int a[rows][rows], int r,int c);
void transpose(int a[rows][rows], int r, int c);
main()
{
    int r,c,a[rows][rows];
    printf("enter the value of row and coulum\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    sum(a,r,c);
    r_sum(a,r,c);
    c_sum(a,r,c);
    max_r(a,r,c);
    display_d(a,r,c);
    ute(a,r,c);
    lte(a,r,c);
    transpose(a,r,c);
}

void read(int a[rows][rows], int r,int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[rows][rows],int r, int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);

        }
        printf("\n");
    }
}

 int sum(int a[rows][rows],int r, int c)
 {
     int i,j,s=0;
     for (i=0;i<r;i++)
     {
         for (j=0;j<c;j++)
         {
             s=s+a[i][j];
         }
     }
     printf("%d is sum of all the elements of given matics\n",s);
 }


 void r_sum(int a[rows][rows], int r, int c)
 {
     int i,j,s=0;
     for(i=0;i<r;i++)
     {
         s=0;
         for(j=0;j<c;j++)
         {
             s=s+a[i][j];
         }
         printf("%d row sum is %d\n",i+1,s);
     }
 }

 void c_sum(int a[rows][rows], int r,int c)
 {
     int i,j,s=0;
     for (j=0;j<c;j++)
     {
         s=0;
         for(i=0;i<r;i++)
         {
             s=s+a[i][j];
         }
         printf("%d colum sum is %d\n",j+1,s);
     }
 }

 void max_r(int a[rows][rows], int r,int c)
 {
     int i,j,max=0;
     for (i=0;i<c;i++)
     {  max=0;
         for(j=0;j<r;j++)
         {
             if(a[i][j]>max)
             {
                 max=a[i][j];
             }
         }
         printf("%d row max num is %d\n",i+1,max);
     }
 }

 void display_d(int a[rows][rows], int r , int c)
 {
     int i,j,s=0;
     printf("diagonal elements of matrix are\n");
     for (i=0;i<r;i++)
     { for (j=0;j<c;j++)
     {
        if (i==j)
     {
        printf("%d\t",a[i][j]);
        s=s+a[i][j];
     }
     }
     }
     printf("\nsum of diagonal elements is %d",s);
 }

 void ute(int a[rows][rows],int r, int c)
 {
     int i,j,s=0;
     printf("\nupper triangle elements are\n");
     for (i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             if (i<j)
             {
                 printf("%d\t",a[i][j]);
                 s=s+a[i][j];
             }
         }
     }
     printf("\nsum of these upper traiangle elements is %d\n\n",s);
 }

 void lte(int a[rows][rows], int r,int c)
 {
     int i,j,s=0;
     printf("\nlower triangle elements of matrix are\n");
     for(i=0;i,i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             if (i>j)
             {
                 printf("%d\t",a[i][j]);
                 s=s+a[i][j];
             }
         }
     }
     printf("\nsum of these lower triangle elements is %d\n\n",s);
 }

 void transpose(int a[rows][rows], int r, int c)
 { printf("\n transpose of matrix is \n");
     int i,j;
     for(j=0;j<c;j++)
     {
         for(i=0;i<r;i++)
         {
             printf("%d  ",a[i][j]);
         }

     printf("\n");
     }
 }
