#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 101;      //Method 1
    ptr->code = 102;        //Method 2 :- Shortcut
    printf("%d",e1.code);

    return 0;
}