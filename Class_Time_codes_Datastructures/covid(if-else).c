#include <stdio.h>
int general_ward(int days);
int ICU(int days);
int special(int days);
int main()
{
    int days,bill=0;
    char ward;
    printf("Enter type of ward:");
    scanf(" %c", &ward);
    printf("Enter number of days");
    scanf("%d",&days);
    switch(ward)
    {
    case 'G':
        bill=general_ward(days);
        break;
    case 'I':
        bill=ICU(days);
        break;
    case 'S':
        bill=special(days);
        break;
    default :
        printf("invalid input");
    }
    printf("Bill of patient is Rs %d\n",bill);
    return 0;
}

int general_ward(int days)
{
    int bill;
    if (days>0&&days<=5)
    {
        bill=2000*days;
    }

    else if (days>5&&days<=10)
    {
        bill=2000*5+4000*(days - 5);
    }

    else
    {
        bill=2000*5+4000*5+6000*(days - 10);
    }
    return bill;
}
int ICU(int days)
{
    int bill;
    if(days>0&&days<=5)
    {
        bill=5000*days;
    }

    else if(days>5&&days<=10)
    {
        bill=5000*5+8000*(days - 5);
    }
    else
    {
        bill=5000*5+8000*5+10000*(days - 10);
    }
    return bill;
}
int special(int days)
{
    int bill;
    if(days>0&&days<=5)
    {
        bill=3000*days;
    }
    else if(days>5&&days<=10)
    {
        bill=3000*5+6000*(days-5);
    }
    else
    {
        bill=3000*5+6000*5+8000*(days-10);
    }
    return bill;
}
