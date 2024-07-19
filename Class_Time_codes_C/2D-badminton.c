#include<stdio.h>
main()
{
    int  i,max[1][1];
    char s[20][20];
    int  players,matchs;

        printf("enter number of MATCHS:");
            scanf("%d",&players);
        printf("enter number of players:");
            scanf("%d",&matchs);

    read(s,matchs,players);
    PRINT(s,matchs,players);
    max_worker(s,matchs,players);
}
void read(char a[20][20],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            fflush(stdin);
            scanf("%c",&a[i][j]);
        }
    }
}
void PRINT(char a[20][20],int row,int col)
{
    int i,j;
    printf("\t Displaying output...:\n");
    for(i=0;i<row;i++)
    {
        printf("\n\t");
        for(j=0;j<col;j++)
        {
            printf("%-4c",a[i][j]);
        }
        printf("\n");
    }
}
void max_worker(char a[20][20],int row,int col)
{
    int max,i,j;
    for(i=0;i<row;i++)
    {
        max=0;
        for(j=0;j<col;j++)
        {
            if(a[i][j]=='W')
            max=max+1;
        }
        printf("%d  PLAYER wins=%d\n",i+1,max);
    }
}


