// insertion at specific position

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
    int val,pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("Eneter the new value : ");
    scanf("%d",&val);
    
    for (int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    printf("Array after specific position insertion : ");
    for (int i=0;i<n+1;i++)
    {
        printf("%d  ",a[i]);
    }
}