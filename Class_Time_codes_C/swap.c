// C program to swap two numbers without using temp
#include<stdio.h>
main()
{
    int a,b;
    printf("Enter value for a=");
    scanf("%d",&a);
    printf("Enter value for b=");
    scanf("%d",&b);
    printf("values before swap a=%d b=%d\n",a,b);

    b = a + b;
    a = b - a;
    b = b - a;

    printf("\nvalues after swap a=%d b=%d\n",a,b);
}
