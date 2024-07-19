#include<stdio.h>
struct football
{
    char name[30];
    char players[30];
    char director[30];
    int ryear;
    char prod_house[30];

};

main()
{
    struct football m[15];
    int n;
    printf("\nenter no of footballs:-");
    scanf("%d",&n);
    read(m,n);
    printf("after sorting\n");
    sort(m,n);
    display(m,n);
    director(m,n);
    pro(m,n);
    count(m,n);

}
void read(struct football m[15],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter football name,players,director,release year,production house\n");
        scanf("%s%s%s%d%s",m[i].name,m[i].players,m[i].director,&m[i].ryear,m[i].prod_house);

    }
}
void display(struct football m[15],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Details of football\n");
        printf("\nfootball name:-%s\n",m[i].name);
        printf("\nplayers:-%s\n",m[i].players);
        printf("\ndirector:-%s\n",m[i].director);
        printf("\nrelease yaer:-%d\n",m[i].ryear);
        printf("\nproduction house:-%s\n",m[i].prod_house);
    }
}
void sort(struct football m[15],int n)
{
    struct football s;
    int i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(m[j].ryear>m[j+1].ryear)
                {
                    s=m[j];
                    m[j]=m[j+1];
                    m[j+1]=s;}

        }
    }

}
void director(struct football m[15],int n)
{
    int i,f=0;
    char dar[30];
    printf("\nenter the name of director:-");
    scanf("%s",dar);
    for(i=0;i<n;i++)
    {
        if(strcmp(m[i].director,dar)==0)
        {
            f=1;
             printf("\nfootball name:-%s\n",m[i].name);
        printf("\nplayers:-%s\n",m[i].players);
        printf("\ndirector:-%s\n",m[i].director);
        printf("\nrelease yaer:-%d\n",m[i].ryear);
        printf("\nproduction house:-%s\n",m[i].prod_house);
        break;

        }
    }
    if(f==0)
    printf(" director not found not found");

}
void pro(struct football m[15],int n)
{
    int i,f=0;
    char pro[30];
    printf("\nenter the name of production house:-");
    scanf("%s",pro);
    for(i=0;i<n;i++)
    {
        if(strcmp(m[i].prod_house,pro)==0)
        {
            f=1;
             printf("\nfootball name:-%s\n",m[i].name);
        printf("\nplayers:-%s\n",m[i].players);
        printf("\ndirector:-%s\n",m[i].director);
        printf("\nrelease yaer:-%d\n",m[i].ryear);
        printf("\nproduction house:-%s\n",m[i].prod_house);
        break;

        }
    }
    if(f==0)
    printf(" production not found");

}
void count(struct football m[15],int n)
{
    int i,c=0;
    int y;
    printf("\nenter the year of release:-");
    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if(m[i].ryear==y)
            c++;
    }
   printf("no of footballs released in %d =%d",y,c);

}
#include<stdio.h>
struct goals
{
    char name[100];
    int roll_no;
    float marks;
};
float score(float m1,float m2,float m3);
main()
{
    struct goals s1,s2,s3;
    read(&s1);
    read(&s2);
    read(&s3);
    float max=score(s1.marks,s2.marks,s3.marks);
    printf("max=%f",max);
}
void read(struct goals *s)
{
    printf("Enter details of goals\n");
    printf("\nName:-");
    scanf("%s",s->name);
    printf("\nRoll no:-");
    scanf("%d",&s->roll_no);
    printf("\nMarks:-");
    scanf("%f",&s->marks);
}
void display(struct goals s)
{
     printf("\nName:-%s",s.name);
     printf("\nRoll no:-%d",s.roll_no);
     printf("\nMarks:-%f",s.marks);

}
float score(float m1,float m2,float m3)
{
    if(m1>m2&&m1>m3)
      return m1;
    else if(m2>m3)
        return m2;
        else
            return m3;
}
#include<stdio.h>
struct goals
{
    char name[100];
    int roll_no;
    float marks;
};
float score(float m1,float m2,float m3);
main()
{
    struct goals s1,s2,s3;
    read(&s1);
    read(&s2);
    read(&s3);
    float max=score(s1.marks,s2.marks,s3.marks);
    printf("max=%f",max);
}
void read(struct goals *s)
{
    printf("Enter details of goals\n");
    printf("\nName:-");
    scanf("%s",s->name);
    printf("\nRoll no:-");
    scanf("%d",&s->roll_no);
    printf("\nMarks:-");
    scanf("%f",&s->marks);
}
void display(struct goals s)
{
     printf("\nName:-%s",s.name);
     printf("\nRoll no:-%d",s.roll_no);
     printf("\nMarks:-%f",s.marks);

}
float score(float m1,float m2,float m3)
{
    if(m1>m2&&m1>m3)
      return m1;
    else if(m2>m3)
        return m2;
        else
            return m3;
}
#include<stdio.h>
struct goals
{
    char name[100];
    int roll_no;
    float marks;
};
float score(float m1,float m2,float m3);
main()
{
    struct goals s1,s2,s3;
    read(&s1);
    read(&s2);
    read(&s3);
    float max=score(s1.marks,s2.marks,s3.marks);
    printf("max=%f",max);
}
void read(struct goals *s)
{
    printf("Enter details of goals\n");
    printf("\nName:-");
    scanf("%s",s->name);
    printf("\nRoll no:-");
    scanf("%d",&s->roll_no);
    printf("\nMarks:-");
    scanf("%f",&s->marks);
}
void display(struct goals s)
{
     printf("\nName:-%s",s.name);
     printf("\nRoll no:-%d",s.roll_no);
     printf("\nMarks:-%f",s.marks);

}
float score(float m1,float m2,float m3)
{
    if(m1>m2&&m1>m3)
      return m1;
    else if(m2>m3)
        return m2;
        else
            return m3;
}
