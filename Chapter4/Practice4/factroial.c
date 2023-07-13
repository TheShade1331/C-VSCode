#include<stdio.h>
int main()
{
    int c, factorial = 1;
    printf("Enter Value of a:\n");
    scanf("%d", &c);
    for(int i = c; i ; i--)
    {
        factorial = factorial*i;
    }
    printf("The Facorial of %d is %d", c, factorial);
    return 0;
}
