#include<stdio.h>
int main()
{
    int Sum = 0;
    for(int i=1; i<=10; i++)
    {
        Sum = Sum + 8*i;
    }
    printf("Sum of Multiplication Table of 8 is: %d", Sum);
    return 0;
}