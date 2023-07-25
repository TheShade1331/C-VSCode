#include<stdio.h>
int main()
{
    float f = 3.4;
    float *ptr = &f;
    printf("The Value of ptr is %u\n",ptr);
    ptr++;
    // above statement means ptr = ptr + 1;
    // ptr++;
    // ptr--;
    printf("The Value of ptr is %u\n",ptr);
    return 0;
}
// Increment of 4 Because Float has a Size of 1 Byte.