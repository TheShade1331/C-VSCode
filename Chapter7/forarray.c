#include<stdio.h>
int main()
{
    int A[5] = {1,2,3,4,5};
    int *ptr = &A[0];
    printf("Value of Ptr is %u\n", ptr);
    for(int i=0; i<5; i++)
    {
        printf("Element No: %d = %u\n",i,*ptr);
        ptr++;
    }
    return 0;
}