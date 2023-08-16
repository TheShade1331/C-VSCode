#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show (struct employee e);
int main()
{
    struct employee e1;
    struct employee *ptr;
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