// divide and conquer aproach to sort an array
// key point base case if(l==r)
// k is the first value of new array i.e 0

#include<stdio.h>
void merge(int a[],int p, int mid, int r)
{
    int size=r-p+1;
    int b[size];
    int i=p,j=mid+1,k=0;    // k is the first index of array b[size]
    while (i<=mid && j<=r)
    {
        if (a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
        while(j<=r)
        {
            b[k]=a[j];
            j++;
            k++;
        }
        for (int i=p,k=0;i<=r;i++,k++)
        {
            a[i]=b[k];
        }
    }
}
void ms(int a[],int l,int r)
{
    if (l<r)
    {
        int mid=(l+r)/2;
        ms(a,l,mid);
        ms(a,mid+1,r);
        
        merge(a,l,mid,r);
    }
}
// void m
// {
//     int merge = 
// }
void main()
{
    int a[]={2,8,3,4,9,54,12,5,6,7,1};
    int l=0,r,mid;
    int size = sizeof(a)/sizeof(a[0]);
    r = size-1;
    //mid=(l+r)/2;
    
    ms(a,l,r);
    for (int i=0;i<size;i++)
    printf("%d ",a[i]);
    // m();
}