#include<stdio.h>
int main()
{
    int P,N,R,I;
    R = 6;
    printf("Enter Principal:\n");
    scanf("%d",&P);
    printf("Enter Number of Years\n");
    scanf("%d",&N);
    I = P*N*R/100;
    printf("Simple Intrest Applicable is: %d",I);
    return 0;
}