#include<stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The Value of ptr is %u\n",ptr);
    ptr++;
    // above statement means ptr = ptr + 1;
    // ptr++;
    // ptr--;
    printf("The Value of ptr is %u\n",ptr);
    return 0;
}
// Increment of 1 Because int has a Size of 4 Byte.