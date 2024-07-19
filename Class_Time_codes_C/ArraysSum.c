#include<stdio.h>
#define size 5
void read(int[],int);
void print(int[],int);
main()
{
    int arr[size],n,s;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    if(n>=11 || n<=0)
    {
        printf("This size limit is invalid please retry");
        return 0;
    }
    printf("Enter values for input=\n");
    read(arr,n);
    sum_arr(arr,n);
   // print(arr,n); As we are using the 4th category we wont use this
}
void read(int arr[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print(int q[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",q[i]);
    }
}
void sum_arr(int a[size],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum=%d",sum);
    //return sum; we using the 4 th category so commented this
}
