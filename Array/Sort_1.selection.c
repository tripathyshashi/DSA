// step 1. first select the smallest element, then swap it to lowest index and so on with unsorted parts
// we iterate here n-1 times because the last element is already sorted
// Time Complexity O(n^2)
#include<stdio.h>
void display(int b[],int s){
    printf("Sorted Elements are : ");
    for (int i=0;i<s;i++){
        printf("%d ",b[i]);
    }
}
void calc(int b[],int s){
    int i,j,temp,min;
    for (i=0;i<s;i++){
        min = i;
        for (j=i+1;j<s;j++){
            if (b[j]<b[min])
                min=j;
        }
        temp=b[i];
        b[i]=b[min];
        b[min]=temp;
    }
    display(b,s);
}
void input(){
    int i,size;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter Elements : ");
    for (i=0;i<size;i++)
    scanf("%d",&a[i]);
    calc(a,size);
}
int main(){
    input();
}