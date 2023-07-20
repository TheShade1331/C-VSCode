#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a=4, b=7;
    printf("the Value of a & b is %d & %d\n",a, b);
    printf("the Value of 4+7 is %d\n",sum(a,b));
    printf("the Value of a & b after Function Call is %d & %d\n",a, b);
    return 0;
}
int sum(int a, int b){
    int c;
    c =a + b;
    b = 235;      // Call by Value..
    a = 355;      // We are Only taking the Value into the Function.
    return c;     // Hence it Won't change the Orignal Value after Function Call
}