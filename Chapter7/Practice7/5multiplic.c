#include<stdio.h>
int main()
{
    int A[10];
    for(int i=1; i<11; i++)
    {
        A[i]=5*i;
        printf("5 x %d = %d\n",i, A[i]);
    }
    return 0;
}