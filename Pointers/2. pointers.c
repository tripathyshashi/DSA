#include<stdio.h>
void main()
{
    int a=10;
    int* b =&a;
    int* c =&*b;
    int* d =&*c;
    int* e =&*d;
    int* f =(&*e);
    printf("%d",*f);
    
}