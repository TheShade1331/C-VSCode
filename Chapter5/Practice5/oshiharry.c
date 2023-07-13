#include<stdio.h>
void printPattern(int n);
int main()
{
    int n;
    printf("Enter Value of N:\n");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
void printPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");                        // 3 madhe 2 call zhala
        return;                               // 2 madhe 1 call zala
    }                                         // mhnun saglyaat pahile 1 run zala
    printPattern(n-1);                        // mg 2 cha for loop
    for(int i = 0 ; i<(2*n-1) ; i++)          // mg 3 cha for loop
    {
        printf("* ");
    }
    printf("\n");
}