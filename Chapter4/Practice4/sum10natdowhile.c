#include<stdio.h>
int main()
{
    int Sum = 0;
    int n = 1;
    do
    {
        Sum = Sum + n;
        n++;
    } while (n<11);
    printf("Sum of the First 10 Natural Numbers is: %d\n", Sum);
    return 0;
}