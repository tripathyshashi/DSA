#include<stdio.h>
int main()
{
    int a[] ={12,23,45,67,0,1,2,786,4};
    int size = sizeof(a)/sizeof(a[0]);
    for (int i= 1;i<size;i++)
    {
        int key = a[i];
        int j= i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = key;
    }
    for (int i=0;i<size;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}