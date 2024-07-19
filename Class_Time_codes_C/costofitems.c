#include<stdio.h>
main()
{
    int x,y,z;
    float cost;
    printf("Enter cost of item1=");
    scanf("%d",&x);
    printf("\nEnter cost of item2=");
    scanf("%d",&y);
    printf("\nEnter cost of item1=");
    scanf("%d",&z);
    cost=(x+y+z)+(x+y+z)*0.02;
    printf("\nAmount to be paid=%f",cost);

}
