// My Attempt!! Tried My Best!!
#include<stdio.h>
int fibonacci(int a);
int main()
{
    int n,N;
    printf("Enter Value of n:\n");
    scanf("%d", &n);
    N = fibonacci(n);
    printf("Term No: %d of Fibonnaci Sequence is %d", n,N);
    return 0;
}
int fibonacci(int a)
{
    int F;
    if (a == 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    else
    {
        F = fibonacci(a-1) + fibonacci(a-2);
        return F;
    }
}