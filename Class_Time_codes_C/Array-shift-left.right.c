#include<stdio.h>
void readarr(int a[20],int n);
void encrypt(int a[20],int n);
void decrypt(int a[20],int n);
void display(int a[20],int n);
main()
{
    int key,i,n,arr[20],ch;
    printf("Enter number of elements:");
    scanf("%d",&n);
    readarr(arr,n);
    while(1)
    {
        printf("Enter the numbers to shift left/right:");
        scanf("%d",&key);

        printf("Menu:\n");
        printf("1)Encrypt\n 2)Decrypt\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                for(i=0;i<key;i++)
                {
                    encrypt(arr,n);
                }
                break;
            case 2:
                for(i=0;i<key;i++)
                {
                    decrypt(arr,n);
                }
                break;
            default :
                return 0;
        }
    }
}
void encrypt(int a[20],int n)
{
    int i,temp;
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
    printf("Encrypted...\n");
    display(a,n);
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
void decrypt(int a[20],int n)
{
    int i,temp;
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("Decrypted...\n");
    display(a,n);
}
