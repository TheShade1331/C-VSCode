#include<stdio.h>
float average(int a, int b,int c);                // Function Needs to be in float as Average can be in decimal
int main()
{
    int a, b, c;
    float avg;
    printf("Enter First Number:\n");
    scanf("%d", &a);
    printf("Enter Second Number:\n");
    scanf("%d", &b);
    printf("Enter Third Number:\n");
    scanf("%d", &c);
    avg = average(a,b,c);
    printf("The Average of Given Numbers %d, %d & %d is %f", a,b,c,avg);
    return 0;
}
float average(int a, int b, int c)
{
    float avg = (float)(a+b+c)/3;                // Typecasting in Float to Avoid Boundry Conditions
    return avg;
}