#include <stdio.h>
#include <stdlib.h>
struct student
{
    char usn[12];
    int rollno;
    char name[50];
    float per;
};

int main()
{
    struct student *bvb,temp;
    int i,n,j,choice,pos,usn,key;
    printf("\nEnter the no. of students");
    scanf("%d",&n);
    bvb=malloc(sizeof(struct student)*n);
    printf("\nEnter %d student details",n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%s%f",bvb[i].usn,&bvb[i].rollno,bvb[i].name,&bvb[i].per);
    }
    do
    {
        printf("\n1-display, 2-search, 3-append, 4-insert, 5-sort, 6-delete, 7-exit-- choice: ");
        scanf("%d",&choice);
        if(choice>7)
            printf("\nInvalid");
        else
        {
            switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                 printf("\n usn : %s  roll no : %d name : %s percentage : %f",bvb[i].usn,bvb[i].rollno,bvb[i].name,bvb[i].per);
                }
                break;

            case 2:
                printf("\n enter usn to search");
                scanf("%d",usn);
                for(i=0;i<n;i++)
                {
                  if(strcmp(usn,bvb[i].name)==0)
                    break;
                }
                if(i==n)
                    printf("\n usn not found");
                else
                    printf("\n Record found: usn : %s  roll no : %d name : %s percentage : %f",bvb[i].usn,bvb[i].rollno,bvb[i].name,bvb[i].per);
                break;

            case 3:
                bvb=realloc(bvb,sizeof(struct student)*(n+1));
                printf("\n enter student details to append");
                scanf("%s%d%s%f",bvb[n].usn,&bvb[n].rollno,bvb[n].name,&bvb[n].per);
                break;
            case 4:
                bvb=realloc(bvb,sizeof(struct student)*(n+1));
                printf("\n enter position");
                scanf("%d",&pos);
                for(i=n;i>=pos;i--)
                {
                    bvb[i]=bvb[i-1];
                }
                scanf("%s%d%s%f",bvb[i].usn,&bvb[i].rollno,bvb[i].name,&bvb[i].per);
                n=n+1;

            case 5:
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n-1;j++)
                    {
                        if(bvb[j].per>bvb[j+1].per)
                        {
                            temp=bvb[j];
                            bvb[j]=bvb[j+1];
                            bvb[j+1]=temp;
                        }
                    }
                }
                break;
            case 6:
            printf("\n enter data to be deleted");
            scanf("%d",key);
            for(i=0;i<n;i++)
            {
                if((*(bvb+i)).per==key)
                    break;
            }
            if(i==n)
                printf("\n Key not found");
            else
            {
                for(;i<(n-1);i++)
                {
                    bvb[i]=bvb[i+1];
                }
            bvb=realloc(bvb,sizeof(struct student)*(n-1));
            }
            break;

        case 7:break;
        }

    }

}
       while(choice!=7);
       return(0);
}
