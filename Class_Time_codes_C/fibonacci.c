#include <stdio.h>
#include <stdlib.h>
main()
{
 int f1,f2,f3,n,i,range_start,range_end;
 printf("Enter the number of terms:\n");
 scanf("%d",&n);
 if(n<1 || n>50)
    return 0;
 //ranger input
 scanf("%d%d",&range_start,&range_end);
 for(f1=0,f2=0,i=range_start;i<=range_end;i++)
 {
    if(is_prime(i))
    {
        f3=f1+f2+is_prime(i);
    }
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
 }

}
int is_prime(int n)
{
    int i;
  if (n <= 1)
    return n;  // 0 n 1 is not prime
  for (i=1;i<=n;i++)
  {
    if (n % i == 0)
    return 0;  // for all checks prime
  }
  return n;  // Taking as flag positive and sending prime no
}
