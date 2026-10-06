#include<stdio.h>
void display(int a[],int size){
    printf("Sorted Elements are : ");
    for (int i=0;i<size;i++)
        printf("%d ",a[i]);
}
void calc(int a[],int size){
    int j,temp;
    for (int i=0;i<size-1;i++){
        for (j=0;j<size-i-1;j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }
    }}
    display(a,size);
}
void input()
{
    int size;
    printf("Enter the no. of Elements : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter Elements : ");
    for (int i=0;i<size;i++)
    scanf("%d",&a[i]);
    calc(a,size);
}
int main(){
    input();
}