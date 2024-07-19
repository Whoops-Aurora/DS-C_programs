// c program to convert lower case to upper case
#include<stdio.h>
main()
{
    char x;
    printf("Input a lower case letter=");
    scanf("%c",&x);
    x=x-32;
    printf("Capital character of nput is=%c",x);
}
