#include<stdio.h>
float TempretureConvetor (float a);
int main()
{
    float a, b;
    printf("Enter Tempreture in Celsius:\n");
    scanf("%f", &a);
    b = TempretureConvetor(a);
    printf("The Tempreture in Fahrenheit is %f",b);
    return 0;
}
float TempretureConvetor (float a)
{
    float f = (a*9/5)+32;
    return f;
}
