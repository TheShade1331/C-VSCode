#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;
void show (struct employee e);    //can be written void show (emp e); as well
int main()
{
    //Declaring e1 & ptr
    // struct employee e1;         //Now as we have typedef
    // struct employee *ptr;       //No need of this anymore

    emp e1;                     //struct employee => emp
    emp *ptr;        

    //Pointing ptr to e1
    ptr = &e1;

    ptr->code = 100;
    ptr->salary = 250.59;
    strcpy(ptr->name,"Sagar");
    show(e1);
    return 0;
}
void show (struct employee e)
{
    printf("%d\n",e.code);
    printf("%.2f\n",e.salary);
    printf("%s\n",e.name);
}