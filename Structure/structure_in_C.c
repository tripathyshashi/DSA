#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[50];
    int marks;
    int percentage;
};//shashi,rr,aryan;
struct student shashi,rr,aryan; //Global variable we can write inside the main too as a local variable

void print()
{
    printf("Name of Aryan : %s",aryan.name);
}
void main()
{
    
    // struct student shashi,rr,aryan;
    
    aryan.marks = 99;
    rr.percentage = 96;
    strcpy(shashi.name,"Shashi the potter student of second year");
    printf("Name : %s\n",shashi.name);
    shashi.roll = 1;
    printf("Roll no : %d\n",shashi.roll);
    shashi.marks= 36;
    printf("Marks got by %s is %d\n",shashi.name,shashi.marks);
    shashi.percentage=45;
    printf("Percentage : %d\n",shashi.percentage);
    
    //aryan
    strcpy(aryan.name,"Aryan the bhadwa");
    printf("Name : %s",aryan.name);
    printf("%d\n",aryan.marks);
    
    
    printf("\nPrinted by the print Function\n");
    print();
    // printf();
}