#include<stdio.h>
#include<stdlib.h>
void read(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void swap(int a[10],int n)
{
    int i,j,t;
    for(i=0,j=1;i<n,j<n;i++,j++)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j++;
    }
}
void display(int a[10],int n)
{
     int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int n,a[10];
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    read(a,n);
    printf("the array before swapping\n");
    display(a,n);
    swap(a,n);
    printf("\nthe array after swapping\n");
    display(a,n);
    return 0;
}
