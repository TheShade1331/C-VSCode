#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee YouTube[100];
    YouTube[0].code = 100;
    YouTube[0].salary = 300.69;
    strcpy(YouTube[0].name,"Sagar");

    YouTube[1].code = 101;
    YouTube[1].salary = 400.69;
    strcpy(YouTube[1].name,"Rishabh");

    YouTube[2].code = 102;
    YouTube[2].salary = 400.69;
    strcpy(YouTube[2].name,"Meet");
    return 0;
}