#include<stdio.h>
void readarr(int a[20],int n);
void display(int a[20],int n);
void search(int a[20],int n);
main()
{
    int arr[20],n,s1[20],s2[20];
    printf("Enter number of elements:");
    scanf("%d",&n);
    readarr(arr,n);
    display(arr,n);
    split(arr,n,s1,s2);
}
void display(int a[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %-4d",a[i]);
    }
    printf("\n");
}
void readarr(int a[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,n);
}
void split(int a[20],int n,int b[20],int c[20])
{   int mid,i,j;
    mid=n/2;
    for(i=0;i<mid;i++)
    {
        b[i]=a[i];
    }
    for(j=0;i<n;j++,i++)
    {
        c[j]=a[i];
    }
    printf("First half...\n");
    display(b,mid);
    printf("Second half...\n");
    display(c,j);

}
