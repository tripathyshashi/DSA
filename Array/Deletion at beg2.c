// deletion at beginning

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
    
    
    for (int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("Array after deletion at beginning : ");
    for (int i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
}