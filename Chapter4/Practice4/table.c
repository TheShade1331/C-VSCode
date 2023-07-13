#include<stdio.h>
int main()
{
    int n;
    int i=1;
    printf("Enter the Number:\n");
    scanf("%d", &n);
    printf("The Table of %d is:\n",n);
    do
    {
        printf("%d x %d = %d\n",n, i, n*i);
        i++;
    } while (i<11);
    return 0;
}