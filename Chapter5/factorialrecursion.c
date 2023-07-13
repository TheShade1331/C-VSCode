#include<stdio.h>
int factorial(int a);
int main()
{
    int a, value;
    printf("Enter the Number\n");
    scanf("%d",&a);
    value = factorial(a);
    printf("The Factorial of %d is %d", a ,value);
    return 0;
}
int factorial(int a)
{
    int f;
    if ( a == 0 || a == 1)
    return 1;
    else
    {
        f = a*factorial(a-1);            // A Program to calculate factorial using recursion
        return f;
    }
}