//01FE21BEC211
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x,y,D;

    printf("Input values for a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    D=D*D-4*a*c;
    if(D>=0)
    {
    x=((-b)+sqrt(D))/2*a;
    y=((-b)-sqrt(D))/2*a;
    printf("Two real roots are x1=%0.2f x2=%f",x,y);
    }
    else
    {
        printf("real roots doesn't exist");
    }

}
