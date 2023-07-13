#include<stdio.h>
int main()
{
    int c;
    printf("Enter Tempreture in Degree Celsius:");
    scanf("%d", &c);
    float f = (c*9/5)+32;
    printf("Tempreture in Fahrenheight is: %f",f);
    return 0;
}