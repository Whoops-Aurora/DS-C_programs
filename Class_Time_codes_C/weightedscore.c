#include<stdio.h>
main()
{
    int a1,a2,a3,e1,e2;
    float score;
    printf("Enter marks for assignments[1-3]=");
    scanf("%d%d%d",&a1,&a2,&a3);
    printf("\nEnter marks for Exams[1&2]=");
    scanf("%d%d",&e1,&e2);
    score=(a1+a2+a3)*0.1+(e1+e2)*0.35;
    printf("Total weighted score=%f",score);

}
