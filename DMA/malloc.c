#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr;
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    for (int i =0 ;i<n;i++)
    {
        printf("Enter the value at index no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i =0 ;i<n;i++)
    {
        printf("The value at index %d of this array is %d\n",i,ptr[i]);
        // printf("%d",ptr[i]);
    }

    return 0;
}