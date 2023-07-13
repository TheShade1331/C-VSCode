#include<stdio.h>
// Sum is a Funtion which takes a & b as input & returns an Integer as an Output.
int sum(int a, int b); // Function Prototype Declaration.

int main()
{
    int c;
    c = sum(22,5); // Function Call  // 2,3 are Arguements
    printf("The Value of c is %d\n", c);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a +b;          // a & b are Parameters
    // return result;
}