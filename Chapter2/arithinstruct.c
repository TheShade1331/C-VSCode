#include<stdio.h>
#include<math.h>
int main()
{
    int a = 4;
    int b = 2;
    //z = b * a is legal
    //b * a = z is not legal, will show error
    printf("The value of a+b is: %d\n",a + b); //addition
    printf("The value of a-b is: %d\n",a - b); //substraction
    printf("The value of a*b is: %d\n",a * b);//product
    printf("The value of a/b is: %d\n",a / b);//quotient
    printf("The value of a%b is: %d\n",a % b);//remainder
    // % - Modular Division Operator, returns the reminder
    // cannot be applied on float & keeps Same Sign as Numerator
    printf("The value of a to the Power b is: %f\n", pow(a,b));

    printf("5/2 is: %f\n", 5.0/2);
    int x = 4;
    int y = 9;
    printf("the value of 3x - 8y is:%d\n", 3*x - 8*y);
    return 0;
}