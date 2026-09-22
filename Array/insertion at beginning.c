// insertion at beginning

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int val;
    printf("Eneter the new value : ");
    scanf("%d",&val);
    
    for (int i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=val;
    printf("Array after insertion : ");
    for (int i=0;i<n+1;i++)
    {
        printf("%d  ",a[i]);
    }
}