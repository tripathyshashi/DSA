// deletion at specific position

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
    int pos;
    printf("Enter the position  : ");
    scanf("%d",&pos);
    
    for (int i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("Array after deletion at specific position : ");
    for (int i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
}