#include<stdio.h>
typedef struct Complex_Numbers{
    float real;
    float imaginary;
}CN;
void display (CN e)
{
    printf("Real Part is %.2f\n",e.real);
    printf("Imaginary Part is %.2f\n",e.imaginary);
    printf("Hence Complex Number is %.2f + (%.2f)real",e.real,e.imaginary);
}
int main()
{
    CN v1;
    CN *ptr;
    ptr = &v1;
    ptr->real = 2.4;
    ptr->imaginary = -3.6;
    display(v1);
    return 0;
}