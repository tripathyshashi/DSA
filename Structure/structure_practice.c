#include<stdio.h>
#include<string.h>
struct friends
{
    char name[50];
    int contact;
    char college[50];
    char sec[10];
}shashi,rr,aryan,nis,faiz;
// struct friends shashi,rr,aryan,nis,faiz;
void sr()
{
    printf("Name : %s\n",shashi.name);
    printf("Contact : %d\n",shashi.contact);
    printf("Institute : %s\n",shashi.college);
    printf("Section : %s\n\n",shashi.sec);
    
}
void sulli()
{
    printf("Name : %s\n",aryan.name);
    // printf("contact : %s\n",aryan.contact);
    // printf("Institute : %s\n",aryan.college);
    // printf("Section : %s\n\n",aryan.sec);
    
}
void rag()
{
    printf("Name : %s\n",rr.name);
}
void main()
{
    
    strcpy(shashi.name,"Shashi the potter");
    shashi.contact = 630585;
    strcpy(shashi.college,"MIT");
    strcpy(shashi.sec,"D");
    strcpy(aryan.name,"Aryan sulliga");
    aryan.contact = 9570;
    strcpy(aryan.college,"Avinash");
    strcpy(aryan.sec,"A");
    strcpy(rr.name,"RR the bhadwa");
    
    sr();
    sulli();
    rag();
}