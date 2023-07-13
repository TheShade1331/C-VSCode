#include<stdio.h>
int main()
{
    int n = 1;
    int Sum = 0;
    while (n<=10)
    {
        Sum = Sum + n;
        n++;
    }
    printf("Sum of First 10 Natural Numbers is: %d", Sum);
    return 0;
}