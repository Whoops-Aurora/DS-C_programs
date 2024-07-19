#include<stdio.h>
void readarr(int a[20],int n);
void display(int a[20],int n);
void search(int a[20],int n);
main()
{
    int arr[20],n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    readarr(arr,n);
    display(arr,n);
    search(arr,n);
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
void search(int a[20],int n)
{
    int key,i;
    printf("Enter a element to search");
    scanf("%d",&key);
        for(i=0;i<n;i++)
        {
                if(a[i]==key)
                {
                    printf("element found!!,Enter int to replace:");
                    scanf("%d",&a[i]);
                    break;
                }
        }
        printf("After replacing...\n");
        display(a,n);
}
