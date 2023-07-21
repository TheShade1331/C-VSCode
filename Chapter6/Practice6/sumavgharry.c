#include<stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg);
int main()
{
    int i, j ,sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i,j, & sum, &avg);
    printf("The value of Sum is %d\n", sum);
    printf("The Value of avg is %f \n", avg);
    return 0;
}
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*(sum)/2;
}