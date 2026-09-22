// use of realloc
// we use calloc instead of malloc to avoid taking garbage value, it simply takes 0 if there is such elements left to be initialized in the place of garbage
// we realloc to reuse the same memory or to change the size 


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr;
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    ptr = (int*)calloc(n, sizeof(int));
    for (int i =0 ;i<n;i++)
    {
        printf("Enter the value at index no %d of this array : \n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i =0 ;i<n;i++)
    {
        printf("The value at index %d of this array is %d\n",i,ptr[i]);
        // printf("%d",ptr[i]);
    }

    printf("Enter the new size of array you : ");
    scanf("%d",&n);

    ptr = (int*)realloc(ptr, n*sizeof(int));
    for (int i =0 ;i<n;i++)
    {
        printf("Enter the new value at index no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i =0 ;i<n;i++)
    {
        printf("The value at index %d of this array is %d\n",i,ptr[i]);
        // printf("%d",ptr[i]);
    }

    free(ptr);

    return 0;
}