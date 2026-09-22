#include<stdio.h>
int main()
{
    int n,i,j,temp,min;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEntered elements are : ");
    for (i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

    for (i=0;i<n-1;i++)
    {
        min = i;
        for (j = i+1;j<n;j++){
            if (arr[j]<arr[min])
                min = j;
        }
    temp = arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
    printf("\nSorted array : ");
    for (i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}