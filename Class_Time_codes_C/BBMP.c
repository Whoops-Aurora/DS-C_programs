#include <stdio.h>
int general_ward(int area);
int ICU(int area);
int special(int area);
int main()
{
    int area,bill=0;
    char ward;
    printf("Enter type of residence:");
    scanf(" %c", &ward);
    printf("Enter area");
    scanf("%d",&area);
    switch(ward)
    {
    case 'R':
        bill=general_ward(area);
        break;
    case 'C':
        bill=ICU(area);
        break;
    case 'O':
        bill=special(area);
        break;
    default :
        printf("invalid input");
    }
    printf("Sum of your dump=%d",bill);
    return 0;
}

int general_ward(int area)
{
    int bill;
    if (area>0&&area<=1000)
    {
        bill=1*area;
    }

    else if (area>1001&&area<=3000)
    {
        bill=(area-1000)*3+1000;
    }

    else
    {
        bill=5*(area-3000)+7000;
    }
    return bill;
}
int ICU(int area)
{
    int bill;
    if (area>0&&area<=1000)
    {
        bill=5*area;
    }

    else if (area>1001&&area<=5000)
    {
        bill=(area-1000)*10+5000;
    }

    else
    {
        bill=20*(area-5000)+45000;
    }
    return bill;
}
int special(int area)
{
    int bill;
    if (area>0&&area<=10000)
    {
        bill=30*area;
    }

    else if (area>10001&&area<=50000)
    {
        bill=50*(area-10000)+300000;
    }

    else
    {
        bill=60*(area-50000)+2000000;
    }
    return bill;
}
