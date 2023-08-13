#include<stdio.h>
int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &A[0];  // or int *ptr = A
    int *PTR = ptr + 2;
    // printf("The Value at PTR+2 is %d", *PTR);
    // return 0;
    if(PTR == &A[2])
    {
        printf("These Points point to the Same Location in Memory\n");
    }
    else
    {
        printf("These Points point to the Different Location in Memory\n");
    }
    return 0;
}