#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 250.59;
    // e1.name = "Sagar";  //Won't Work Because of String.
    strcpy(e1.name,"Sagar");
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}