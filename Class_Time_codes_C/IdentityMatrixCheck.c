#include<stdio.h>
main()
{
    int a[rows][cols],row,col;
    printf("Input Number of rows n columns=");
    scanf("%d%d",&row,&col);
    readarr(a,row,col);
    print(a,row,col);
    unitchk(a,row,col);
}
void unitchk(int a[rows][cols],int row, int col)
{
    int i,j,flag=0;
    for(i=0;i<row,i++)
    {
        for(j=0,j<col,j++)
        {
            if(a[i][i]!=1)
            {
                flag=1;
                break;
            }
            if(i<j || i>j)
            {
                if(a[i][j]!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    printf("Given matrix is not unit matrix");
    printf("Given is a unit matrix");
}
