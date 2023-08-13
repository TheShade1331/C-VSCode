#include<stdio.h>
int main()
{
    int A[10],n;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(int i=1; i<11; i++)
    {
        A[i]=n*i;
        printf("%d x %d = %d\n", n, i, A[i]);
    }
    return 0;
}