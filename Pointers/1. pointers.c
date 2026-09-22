#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter array : ");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);
    
    int (*ptr)[n];
    ptr= &nums;
    
    for (i=0;i<n;i++)
    printf("%d ",(*ptr)[i]);
    
    return 0;
}
