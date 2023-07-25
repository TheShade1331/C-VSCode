#include<stdio.h>
int main()
{
    int a = 19;
    int b = 21;
    int *ptr = &a;
    int *ptr1 = &b;
    printf("The Pointers of a & b are %u & %u.\n", ptr, ptr1);
    int diff = ptr - ptr1;
    printf("The Difference in Pointers between a & b is %d",diff);
    return 0;
}