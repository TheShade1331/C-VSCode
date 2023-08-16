#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee Sagar = {100, 21.19, "Sagar"};
    printf("Code is %d\n",Sagar.code);
    printf("Salary is %.2f\n",Sagar.salary);
    printf("Namae Wa %s\n",Sagar.name);


    struct employee Meet = {0};
    printf("Code is %d\n",Meet.code);
    printf("Salary is %.2f\n",Meet.salary);
    printf("Namae Wa %s\n",Meet.name);
    return 0;
}