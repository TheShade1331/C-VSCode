#include<stdio.h>
int main()
{
    char *Emp1 = "Sagar";
    char *Emp2 = "Rishabh";
    int Salary1 = 3300;
    int Salary2 = 7700;
    FILE *ptr;
    ptr = fopen("prf4.txt","w");
    fprintf(ptr, "Name: %s ; Salary: %d\n",Emp1,Salary1);
    fprintf(ptr ,"Name: %s ; Salary: %d\n",Emp2,Salary2);
    fclose(ptr);
    return 0;
}