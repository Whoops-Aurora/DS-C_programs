#include<stdio.h>
main()
{
    int rc=0,d_d=0,p_d=0,year,n;
    printf("Enter number of movies=");
    scanf("%d",&n);

    year=release_year(s,&rc,n);
    printf("total movies released in the year %d is=%d\n",year,rc);
    director(s,&d_d,n);
    printf("Director details:\n%s\t%s\t%d\n",s[d_d].name,s[d_d].movie,s[d_d].released);
    production(s,&p_d,n);

}
void production(struct movie s[20],int *count,int n)
{
    char Production[10];
    printf("Enter producer name=");
    gets(Production);
    for(i=0;i<n;i++)
    {
        if(s[i].pro==Production)
        {
            *count=*count+1;
        }
    }
}
void director(struct movie s[20],int *count,int n)
{
    char direc[10];
    printf("Enter producer name=");
    gets(direc);
    for(i=0;i<n;i++)
    {
        if(s[i].direc==direc)
        {
            *count=*count+1;
        }
    }
}
int release_year(struct movie s[20],int *count,int n)
{
    int num;
    printf("Enter the release year to search=");
    scanf("%d",&num);
    //Incomplete...

}
