#include<stdio.h>
int main()
{
    int Sum = 0;
    for(int i=1; i<=10; i++)
    {
        Sum = Sum + i;
    }
    printf("Sum of First 10 Natural Numbers is %d", Sum);
    return 0;
}