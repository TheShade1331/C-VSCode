#include<stdio.h>
int Print(int a);
int main()
{
    int i=5;
    printf("The Address of i before Function Call is %u\n",&i);
    Print(i);
    printf("The Address of i After Function Call is %u\n",&i);
    return 0;
}
int Print(int a)
{
    printf("The Address of i before Function Call is %u\n",&a); 
}
// Address inside Function Call is Diffrent because it's Call by Value.