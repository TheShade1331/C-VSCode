#include<stdio.h>
void swap(int*a, int*b);
void wrong_swap(int a, int b);
int main()
{
    int x = 3, y = 4;
    printf("The Value of x & y before swap is %d & %d\n", x,y);
    // wrong_swap(a,b);  // will not work due to call by value.
    swap( &x, &y);   // will work due to call by value.
    printf("The Value of x & y after swap is %d & %d\n", x,y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}
void swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}