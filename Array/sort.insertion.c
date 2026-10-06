// we sort by playing card method
#include<stdio.h>
void display(int a[],int s){
    for (int i=0;i<s;i++)
    printf("%d ",a[i]);
}
void calc(int a[],int s){
    int i,j,key;
    for (i=1;i<s;i++){
        int key =a[i];
        int j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    display(a,s);
}
void input(){
    int size,i;
    printf("Enter the no. of Elements : ");
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