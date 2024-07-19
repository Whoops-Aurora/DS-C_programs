#include<stdio.h>
void readarr(int a[20],int n);
void display(int a[20],int n);
void search(int a[20],int n);
main()
{
    int arr[20],n,odd[20],even[20];
    printf("Enter number of elements:");
    scanf("%d",&n);
    readarr(arr,n);
    display(arr,n);
    sort_odd_even(arr,n,odd,even);
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
void sort_odd_even(int a[20],int n,int o[20],int e[20])
{
    int i,k=0,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[k]=a[i];
            k++;
        }
        else
        {
            o[j]=a[i];
            j++;
        }
    }

    printf("Odd Numbers:\n");
    display(o,j);
    printf("\nEven Numbers:\n");
    display(e,k);
}
