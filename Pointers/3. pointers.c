#include<stdio.h>
void main()

{
    int a=2,b=3,sum;
    int* ptra=&a;
    int* ptrb=&b;
    int* ptrsum=&sum;
    printf("Address of a : %d\n",ptra);
    printf("Value at a : %d\n",(*ptra));
    printf("Address of b : %d\n",ptrb);
    printf("Value at b : %d\n\n",(*ptrb));
    printf("Sum : %d\n",(*ptra)+(*ptrb));
    
}