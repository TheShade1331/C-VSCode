#include<stdio.h>
int Sum(int *a, int *b);
int Average(int*c);
int main()
{
    int a = 1, b = 9, A, B;
    A = Sum(&a, &b);
    B = Average(&A);
    printf("The Sum & Average of Two Numbers are %d & %d Respectively",A,B);
    return 0;
}
int Sum(int *a, int *b)
{
    int Sum = *a + *b;
    return Sum;
}
int Average(int*c)
{
    int Avg = *c/2;
    return Avg;
}