#include <stdio.h>
#include <string.h>

#include <stdlib.h>

int main() {

int n,t;
    scanf("%d",&n);
    if(n<1 || n>70)
    {printf("Invalid input\n");
    }else
    {t=prime(n);
    printf("Total amount =%d",t);}
    checkprime(n);
    return 0;
}
int prime(int n)
{int i,sum=0;
for(i=2;i<=n/2;i++)
{if(i%2!=0)
{sum=sum+10;
}printf("%d",i);}
return sum;
}
checkprime(int n)
{int r;
scanf("%d",&r);
if(r%2!=0)
{printf("Roll number is prime number\n");}
else
{printf("Roll number is not a prime number\n");}}
