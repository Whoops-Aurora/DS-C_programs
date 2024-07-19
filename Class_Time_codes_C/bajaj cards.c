#include<stdio.h>
int addcard(long long int);
main()
{
    long long int card,sum;
    printf("Enter card number:");
    scanf("%lld",&card);
    sum=addcard(&card);
}
int addcard(long long int n)
{
    int t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t>10)
   {
      remainder=t%10;
      sum=sum+remainder;
      t=t/10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return sum;
}
