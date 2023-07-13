#include<stdio.h>
int Sum (int n);
int main()
{
    int n, S;
    printf("Enter Value of N:\n");
    scanf("%d", &n);
    S = Sum(n);
    printf("The Sum of First %d Natural Numbers %d",n,S);
    return 0;
}
int Sum (int n)
{
    int N;
    if (n == 0)
    {
        return 0;
    }
    else
    {
      N = Sum(n-1)+n;
      return N;
    }
}