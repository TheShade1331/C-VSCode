#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Given Number:\n");
    scanf("%d", &num);
    float a = num % 97;
    printf("Since the reminder obtained is %f\n", a);
    printf("Given Number is Divisible by 97");
    return 0;
}