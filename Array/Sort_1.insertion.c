#include<stdio.h>
int main()
{
    int n[]={22,34,54,67,23,4,7,87};
    int size = sizeof(n)/sizeof(n[0]);
    for (int i=1;i<size;i++)
    {
        int key = n[i];
        int j = i-1;
        while(j>=0 && n[j]>key)
        {
            n[j+1] = n[j];
            j--;
        }
        n[j+1] = key;
    }
    for (int i=0;i<size;i++)
    {
        printf("%d  ",n[i]);
    }
    return 0;
}