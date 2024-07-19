#include<stdio.h>
#define pi 3.142
main()
{
    int total_cans,cost_paper;
    float h,d,r,final_cost;
    printf("\n Enter height of can");
    scanf("%f",&h);
    printf("\nEnter the diameter of can");
    scanf("%f",&d);
    scanf("%d",&cost_paper);
    printf("\nEnter total no. of cans");
    scanf("%d",&total_cans);
    r=d/2;
    final_cost=2*pi*r*(h+r)*cost_paper*total_cans;
    printf("total cost=%f",final_cost);
}
