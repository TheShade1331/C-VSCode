#include<stdio.h>
int main()
{
    char c = 34;
    char *ptr = &c;
    printf("The Value of ptr is %u\n",ptr);
    ptr++;
    // above statement means ptr = ptr + 1;
    // ptr++;
    // ptr--;
    printf("The Value of ptr is %u\n",ptr);
    return 0;
}
// Increment of 1 Because Char has a Size of 1 Byte.